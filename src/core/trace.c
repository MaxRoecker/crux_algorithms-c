#include "./trace.h"


CRUX__Trace CRUX__trace_create () {
  CRUX__Fault *const top = nil(CRUX__Fault);
  void *const context = talloc_new(nil(void));
  const CRUX__Trace faultrace = {.top = top, .context = context};
  return faultrace;
}


Bool CRUX__trace_check(const CRUX__Trace trace) {
  const Bool has_fault = (trace.top == nil(CRUX__Fault));
  return has_fault;
}


void CRUX__trace_push (
    CRUX__Trace *restrict const trace,
    const CRUX__Fault fault) {
  assert(trace != nil(CRUX__Trace));
  CRUX__Fault *const traced_fault = talloc_zero(trace->context, CRUX__Fault);
  assert(traced_fault != nil(CRUX__Fault));
  *traced_fault = fault;
  traced_fault->cause = trace->top;
  trace->top = traced_fault;
}


void CRUX__trace_move (
    CRUX__Trace *restrict const target,
    CRUX__Trace *restrict const source) {
  assert(target != nil(CRUX__Trace));
  assert(source != nil(CRUX__Trace));
  talloc_free_children(target->context);
  talloc_steal(target->context, source->context);
  target->top = source->top;
  source->context = nil(void);
  source->top = nil(CRUX__Fault);
}


void CRUX__trace_clean (CRUX__Trace *restrict const trace) {
  if (trace != nil(CRUX__Trace)) {
    if (trace->context != nil(void)) {
      talloc_free(trace->context);
      trace->context = nil(void);
      trace->top = nil(CRUX__Fault);
    }
  }
}


void CRUX__trace_print (FILE *const stream, const CRUX__Trace trace) {
  assert(stream != nil(FILE));
  const CRUX__Fault *next = trace.top;
  while (next != nil(const CRUX__Fault)) {
    const Size error_string_size = CRUX__ERROR_STRING_SIZE;
    const Char format[] = "----------------\n(%s, %d) %s: %s\n\n";
    Char error_string[error_string_size];
    CRUX__error_stringify(next->error, error_string, error_string_size);
    fprintf(
      stream, format, next->filepath, next->line, error_string, next->info);
    next = (const CRUX__Fault *) next->cause;
    if (next != nil(const CRUX__Fault)) {
      fprintf(stream, "Caused by:\n");
    }
  }
  fprintf(stream, "\n\n\n");
}
