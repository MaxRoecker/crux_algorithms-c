#include <string.h>
#include <tap.h>
#include "./../src/core/errors.h"

static const CRUX__Error error_0 = {
  .code = 0x00000000,
  .name = "?"};
static const CRUX__Error error_1 = {
  .code = 0x0000FFFF,
  .name = "You really blew it this time"};
static const CRUX__Error error_2 = {
  .code = 0xFFFFFFFF,
  .name = "Gratuitous error"};


void CRUX__error_equals_test () {
  ok(CRUX__error_equals(error_0, error_0), "Must be equals.");
  ok(!CRUX__error_equals(error_0, error_1), "Must not be equals.");
  ok(!CRUX__error_equals(error_0, error_2), "Must not be equals.");
  ok(!CRUX__error_equals(error_1, error_0), "Must not be equals.");
  ok(CRUX__error_equals(error_1, error_1), "Must be equals.");
  ok(!CRUX__error_equals(error_1, error_2), "Must not be equals.");
  ok(!CRUX__error_equals(error_2, error_0), "Must not be equals.");
  ok(!CRUX__error_equals(error_2, error_1), "Must not be equals.");
  ok(CRUX__error_equals(error_2, error_2), "Must be equals.");
}


void CRUX__error_stringify_tests () {
  const Size string_size = CRUX__ERROR_STRING_SIZE;
  Char string_0[string_size];
  Char string_1[string_size];
  Char string_2[string_size];
  const Char expected_0[] = "E#00000000 ?";
  const Char expected_1[] = "E#0000FFFF You really blew it this time";
  const Char expected_2[] = "E#FFFFFFFF Gratuitous error";
  CRUX__error_stringify(error_0, string_0, string_size);
  CRUX__error_stringify(error_1, string_1, string_size);
  CRUX__error_stringify(error_2, string_2, string_size);
  ok(strcmp(string_0, expected_0) == 0, "Must be the same string.");
  ok(strcmp(string_1, expected_1) == 0, "Must be the same string.");
  ok(strcmp(string_2, expected_2) == 0, "Must be the same string.");
}

void CRUX__occurrences_stack_push_pop_clean_tests () {
  const CRUX__Occurrence *occurrences = NULL;
  const CRUX__Occurrence occurrence_0 = {
    .cause = NULL,
    .error = error_0,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const CRUX__Occurrence occurrence_1 = {
    .cause = NULL,
    .error = error_1,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const CRUX__Occurrence occurrence_2 = {
    .cause = NULL,
    .error = error_2,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__occurrences_push(&occurrences, occurrence_0);
  CRUX__occurrences_push(&occurrences, occurrence_1);
  CRUX__occurrences_push(&occurrences, occurrence_2);

  ok(CRUX__error_equals(occurrence_2.error, occurrences->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence_1.error, occurrences->cause->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence_0.error, occurrences->cause->cause->error), "Must be equals.");

  const CRUX__Occurrence *const popped = CRUX__occurrences_pop(&occurrences);
  ok(CRUX__error_equals(occurrence_2.error, popped->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence_1.error, occurrences->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence_0.error, occurrences->cause->error), "Must be equals.");
  
  CRUX__occurrences_clean(&occurrences);
  ok((occurrences == NULL), "Must be equals.");
}


void CRUX__occurrences_print_tests () {
  const CRUX__Occurrence *occurrences = NULL;
  const CRUX__Occurrence occurrence_0 = {
    .cause = NULL,
    .error = error_0,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const CRUX__Occurrence occurrence_1 = {
    .cause = NULL,
    .error = error_1,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const CRUX__Occurrence occurrence_2 = {
    .cause = NULL,
    .error = error_2,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__occurrences_push(&occurrences, occurrence_0);
  CRUX__occurrences_push(&occurrences, occurrence_1);
  CRUX__occurrences_push(&occurrences, occurrence_2);

  CRUX__occurrences_print(stdout, &occurrences);
  CRUX__occurrences_clean(&occurrences);
}

int main () {
  plan(19);
  CRUX__error_equals_test();
  CRUX__error_stringify_tests();
  CRUX__occurrences_stack_push_pop_clean_tests();
  CRUX__occurrences_print_tests();
  done_testing();
  return EXIT_SUCCESS;
}
