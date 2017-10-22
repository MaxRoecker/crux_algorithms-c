#include <tap.h>
#include "./../src/core/error.h"
#include "./../src/core/exception.h"


void CRUX__exceptions_stack_push_pop_clean_tests () {
  const CRUX__Exception *exceptions = NULL;
  const CRUX__Exception exception_0 = {
    .cause = NULL,
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const CRUX__Exception exception_1 = {
    .cause = NULL,
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const Char info_fmt[] = "I don't know %s";
  CRUX__Exception exception_2 = {
    .cause = NULL,
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  snprintf(exception_2.filepath, 256, info_fmt, "anymore information");
  CRUX__exceptions_push(&exceptions, exception_0);
  CRUX__exceptions_push(&exceptions, exception_1);
  CRUX__exceptions_push(&exceptions, exception_2);

  ok(CRUX__error_equals(exception_2.error, exceptions->error), "Must be equals.");
  ok(CRUX__error_equals(exception_1.error, exceptions->cause->error), "Must be equals.");
  ok(CRUX__error_equals(exception_0.error, exceptions->cause->cause->error), "Must be equals.");

  const CRUX__Exception *const popped = CRUX__exceptions_pop(&exceptions);
  ok(CRUX__error_equals(exception_2.error, popped->error), "Must be equals.");
  ok(CRUX__error_equals(exception_1.error, exceptions->error), "Must be equals.");
  ok(CRUX__error_equals(exception_0.error, exceptions->cause->error), "Must be equals.");
  talloc_free((void *) popped);
  CRUX__exceptions_clean(&exceptions);
  ok((exceptions == NULL), "Must be equals.");
}


void CRUX__exceptions_print_tests () {
  const CRUX__Exception *exceptions = NULL;
  const CRUX__Exception exception_0 = {
    .cause = NULL,
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const CRUX__Exception exception_1 = {
    .cause = NULL,
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  const Char info_fmt[] = "I don't know %s";
  CRUX__Exception exception_2 = {
    .cause = NULL,
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  snprintf(exception_2.filepath, 256, info_fmt, "anymore information");
  CRUX__exceptions_push(&exceptions, exception_0);
  CRUX__exceptions_push(&exceptions, exception_1);
  CRUX__exceptions_push(&exceptions, exception_2);

  CRUX__exceptions_print(stdout, &exceptions);
  CRUX__exceptions_clean(&exceptions);
}


int main () {
  plan(7);
  CRUX__exceptions_stack_push_pop_clean_tests();
  CRUX__exceptions_print_tests();
  done_testing();
  return EXIT_SUCCESS;
}
