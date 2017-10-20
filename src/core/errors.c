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


void CRUX__occurrences_push (
    const CRUX__Occurrence **occurrences,
    const CRUX__Occurrence occurrence) {;
  CRUX__Occurrence *occ = talloc_zero(NULL, CRUX__Occurrence);
  assert(occurrences != NULL);
  assert(((void *) occ) != NULL);
  *occ = occurrence;
  occ->cause = (CRUX__Occurrence *) talloc_steal(occ, *occurrences);
  *occurrences = occ;
}


CRUX__Occurrence * CRUX__occurrences_pop (
    const CRUX__Occurrence **occurrences) {
  CRUX__Occurrence *occurence = (CRUX__Occurrence *) *occurrences;
  *occurrences = talloc_steal(NULL, occurence->cause);
  return occurence;
}


void CRUX__occurrences_print (
    FILE *stream,
    const CRUX__Occurrence *const *const occurrences) {
  assert(stream != NULL);
  assert(occurrences != NULL);
  assert(*occurrences != NULL);
  const CRUX__Occurrence *next = *occurrences;
  while (next != NULL) {
    const Size error_string_size = CRUX__ERROR_STRING_SIZE;
    const Char format[35] = "----------------\n(%s, %d) %s: %s\n\n";
    Char error_string[error_string_size];
    CRUX__error_stringify(next->error, error_string, error_string_size);
    fprintf(
      stream, format, next->filepath, next->line, error_string, next->info);
    next = (const CRUX__Occurrence *) next->cause;
    if (next != NULL) {
      fprintf(stream, "Caused by:\n");
    }
  }
  fprintf(stream, "\n\n\n");
}


void CRUX__occurrences_clean (
    const CRUX__Occurrence **occurrences) {
  assert(occurrences != NULL);
  if (*occurrences != NULL) {
    talloc_free((void *) *occurrences);
    *occurrences = NULL;
  }
}
