#include "./errors.h"


Bool CRUX__error_equals (const CRUX__Error one, const CRUX__Error another) {
  return ((Bool) (one.code == another.code));
}


void CRUX__error_stringify (
    const CRUX__Error error,
    Char *buffer,
    const IU64 buffer_size) {
  assert(buffer_size >= CRUX__ERROR_STRING_SIZE);
  snprintf(buffer, buffer_size, "E#%08X %s", error.code, error.name);
}


void CRUX__exceptions_push (
    const CRUX__Exception **exceptions,
    const CRUX__Exception exception) {;
  CRUX__Exception *expts = talloc_zero(NULL, CRUX__Exception);
  assert(exceptions != NULL);
  assert(((void *) expts) != NULL);
  *expts = exception;
  expts->cause = (CRUX__Exception *) talloc_steal(expts, *exceptions);
  *exceptions = expts;
}


CRUX__Exception * CRUX__exceptions_pop (
    const CRUX__Exception **exceptions) {
  CRUX__Exception *occurence = (CRUX__Exception *) *exceptions;
  *exceptions = talloc_steal(NULL, occurence->cause);
  return occurence;
}


void CRUX__exceptions_print (
    FILE *stream,
    const CRUX__Exception *const *const exceptions) {
  assert(stream != NULL);
  assert(exceptions != NULL);
  assert(*exceptions != NULL);
  const CRUX__Exception *next = *exceptions;
  while (next != NULL) {
    const Size error_string_size = CRUX__ERROR_STRING_SIZE;
    const Char format[35] = "----------------\n(%s, %d) %s: %s\n\n";
    Char error_string[error_string_size];
    CRUX__error_stringify(next->error, error_string, error_string_size);
    fprintf(
      stream, format, next->filepath, next->line, error_string, next->info);
    next = (const CRUX__Exception *) next->cause;
    if (next != NULL) {
      fprintf(stream, "Caused by:\n");
    }
  }
  fprintf(stream, "\n\n\n");
}


void CRUX__exceptions_clean (
    const CRUX__Exception **exceptions) {
  assert(exceptions != NULL);
  if (*exceptions != NULL) {
    talloc_free((void *) *exceptions);
    *exceptions = NULL;
  }
}
