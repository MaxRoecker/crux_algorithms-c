#include "./trace.h"


static const Size POOL_SIZE = as_size(16) * sizeof(CRUX__Fault);
static const void *CRUX__TRACE_POOL = nil(const void);


inline CRUX__Trace CRUX__trace_create (void) {
  CRUX__Fault *const top = nil(CRUX__Fault);
  if (is_nil(CRUX__TRACE_POOL, const void)) {
    CRUX__TRACE_POOL = (const void *) talloc_pool(nil(void), POOL_SIZE);
  }
  void *const context = talloc_new(CRUX__TRACE_POOL);
  const CRUX__Trace faultrace = {.top = top, .context = context};
  return faultrace;
}


inline Bool CRUX__trace_check(const CRUX__Trace trace) {
  const Bool has_fault = is_nil(trace.top, CRUX__Fault);
  return has_fault;
}


inline void CRUX__trace_push (
    CRUX__Trace *restrict const trace,
    const CRUX__Fault fault) {
  assert(!is_nil(trace, CRUX__Trace));
  CRUX__Fault *const traced_fault = talloc_zero(trace->context, CRUX__Fault);
  assert(!is_nil(traced_fault, CRUX__Fault));
  *traced_fault = fault;
  traced_fault->cause = trace->top;
  trace->top = traced_fault;
}


inline void CRUX__trace_move (
    CRUX__Trace *restrict const target,
    CRUX__Trace *restrict const source) {
  assert(!is_nil(target, CRUX__Trace));
  assert(!is_nil(source, CRUX__Trace));
  talloc_free_children(target->context);
  talloc_steal(target->context, source->context);
  target->top = source->top;
  source->context = nil(void);
  source->top = nil(CRUX__Fault);
}


inline void CRUX__trace_clean (CRUX__Trace *restrict const trace) {
  if (!is_nil(trace, CRUX__Trace)) {
    if (!is_nil(trace->context, void)) {
      talloc_free(trace->context);
      trace->context = nil(void);
      trace->top = nil(CRUX__Fault);
    }
  }
}


void CRUX__trace_print (FILE *const stream, const CRUX__Trace trace) {
  assert(!is_nil(stream, FILE));
  const CRUX__Fault *next = trace.top;
  while (!is_nil(next, const CRUX__Fault)) {
    const Size error_string_size = CRUX__ERROR_STRING_SIZE;
    const Char format[] = "----------------\n(%s, %d) %s: %s\n\n";
    Char error_string[error_string_size];
    CRUX__error_stringify(next->error, error_string, error_string_size);
    fprintf(
      stream, format, next->filepath, next->line, error_string, next->info);
    next = (const CRUX__Fault *) next->cause;
    if (!is_nil(next, const CRUX__Fault)) {
      fprintf(stream, "Caused by:\n");
    }
  }
  fprintf(stream, "\n\n\n");
}
