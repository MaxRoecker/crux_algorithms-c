#include <tap.h>
#include "./../src/core/error.h"

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


int main (int argc, char *argv[]) {
  plan(12);
  CRUX__error_equals_test();
  CRUX__error_stringify_tests();
  done_testing();
  return EXIT_SUCCESS;
}
