#include "./errors.h"


bool CRUX__error_equals (
    const CRUX__Error *const one,
    const CRUX__Error *const another) {
  assert(one != NULL);
  assert(another != NULL);
  return (one->code == another->code);
}


const char * CRUX__error_stringify (
    const CRUX__Error *const error) {
  assert(error != NULL);
  const char *const string = talloc_asprintf(
    NULL, "E#%08X %s", error->code, error->name);
  return string;
}


void CRUX__occurrences_push (
    const CRUX__Occurrence **occurrences,
    const CRUX__Error *const error,
    const char *const info,
    const char *const filepath,
    const iu32 line) {
  CRUX__Occurrence *occurrence = talloc_zero(NULL, CRUX__Occurrence);
  occurrence->error = talloc_zero(occurrence, CRUX__Error);
  occurrence->error->code = error->code;
  occurrence->error->name = talloc_strdup(occurrence, error->name);
  occurrence->cause = (CRUX__Occurrence *) talloc_steal(
    occurrence, *occurrences);
  occurrence->info = talloc_strdup(occurrence, info);
  occurrence->filepath = talloc_strdup(occurrence, filepath);
  occurrence->line = line;
  *occurrences = occurrence;
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
    const char *const format = talloc_strdup(
      NULL, "----------------\n(%s, %d) %s: %s\n\n");
    const char *error_string = CRUX__error_stringify(next->error);
    fprintf(
      stream, format, next->filepath, next->line, error_string, next->info);
    talloc_free((void *) format);
    talloc_free((void *) error_string);
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
