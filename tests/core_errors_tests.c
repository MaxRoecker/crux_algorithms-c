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
  // 9
  ok(CRUX__error_equals(&error_0, &error_0), "Must be equals.");
  ok(!CRUX__error_equals(&error_0, &error_1), "Must not be equals.");
  ok(!CRUX__error_equals(&error_0, &error_2), "Must not be equals.");
  ok(!CRUX__error_equals(&error_1, &error_0), "Must not be equals.");
  ok(CRUX__error_equals(&error_1, &error_1), "Must be equals.");
  ok(!CRUX__error_equals(&error_1, &error_2), "Must not be equals.");
  ok(!CRUX__error_equals(&error_2, &error_0), "Must not be equals.");
  ok(!CRUX__error_equals(&error_2, &error_1), "Must not be equals.");
  ok(CRUX__error_equals(&error_2, &error_2), "Must be equals.");
}


void CRUX__error_stringify_tests () {
  // 3
  const char *const string_0 = CRUX__error_stringify(&error_0);
  const char *const string_1 = CRUX__error_stringify(&error_1);
  const char *const string_2 = CRUX__error_stringify(&error_2);
  const char *const expected_0 = "E#00000000 ?";
  const char *const expected_1 = "E#0000FFFF You really blew it this time";
  const char *const expected_2 = "E#FFFFFFFF Gratuitous error";
  ok(strcmp(string_0, expected_0) == 0, "Must be the same string.");
  ok(strcmp(string_1, expected_1) == 0, "Must be the same string.");
  ok(strcmp(string_2, expected_2) == 0, "Must be the same string.");
  talloc_free((void *) string_0);
  talloc_free((void *) string_1);
  talloc_free((void *) string_2);
}

void CRUX__occurrences_stack_push_pop_clean_tests () {
  // 6
  const CRUX__Occurrence *occurrences = NULL;
  const CRUX__Error *occurrence0_error = &error_0;
  const char *const occurrence0_info = "I don't know anymore information";
  const char *const occurrence0_filepath = __FILE__;
  const iu32 occurrence0_line = __LINE__;
  CRUX__occurrences_push(
    &occurrences,
    occurrence0_error,
    occurrence0_info,
    occurrence0_filepath,
    occurrence0_line);
  
  const CRUX__Error *occurrence1_error = &error_1;
  const char *const occurrence1_info = "I don't know anymore information";
  const char *const occurrence1_filepath = __FILE__;
  const iu32 occurrence1_line = __LINE__;
  CRUX__occurrences_push(
    &occurrences,
    occurrence1_error,
    occurrence1_info,
    occurrence1_filepath,
    occurrence1_line);

  const CRUX__Error *occurrence2_error = &error_2;
  const char *const occurrence2_info = "I don't know anymore information";
  const char *const occurrence2_filepath = __FILE__;
  const iu32 occurrence2_line = __LINE__;
  CRUX__occurrences_push(
    &occurrences,
    occurrence2_error,
    occurrence2_info,
    occurrence2_filepath,
    occurrence2_line);

  ok(CRUX__error_equals(occurrence2_error, occurrences->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence1_error, occurrences->cause->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence0_error, occurrences->cause->cause->error), "Must be equals.");

  const CRUX__Occurrence *const popped = CRUX__occurrences_pop(&occurrences);
  ok(CRUX__error_equals(occurrence2_error, popped->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence1_error, occurrences->error), "Must be equals.");
  ok(CRUX__error_equals(occurrence0_error, occurrences->cause->error), "Must be equals.");
  
  CRUX__occurrences_clean(&occurrences);
  ok((occurrences == NULL), "Must be equals.");
}


void CRUX__occurrences_print_tests () {
  // 0
  const CRUX__Occurrence *occurrences = NULL;
  const CRUX__Error *occurrence0_error = &error_0;
  const char *const occurrence0_info = "I don't know anymore information";
  const char *const occurrence0_filepath = __FILE__;
  const iu32 occurrence0_line = __LINE__;
  CRUX__occurrences_push(
    &occurrences,
    occurrence0_error,
    occurrence0_info,
    occurrence0_filepath,
    occurrence0_line);
  
  const CRUX__Error *occurrence1_error = &error_1;
  const char *const occurrence1_info = "I don't know anymore information";
  const char *const occurrence1_filepath = __FILE__;
  const iu32 occurrence1_line = __LINE__;
  CRUX__occurrences_push(
    &occurrences,
    occurrence1_error,
    occurrence1_info,
    occurrence1_filepath,
    occurrence1_line);

  const CRUX__Error *occurrence2_error = &error_2;
  const char *const occurrence2_info = "I don't know anymore information";
  const char *const occurrence2_filepath = __FILE__;
  const iu32 occurrence2_line = __LINE__;
  CRUX__occurrences_push(
    &occurrences,
    occurrence2_error,
    occurrence2_info,
    occurrence2_filepath,
    occurrence2_line);
  
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
