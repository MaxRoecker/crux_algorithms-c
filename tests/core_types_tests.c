#include <string.h>
#include <talloc.h>
#include <tap.h>
#include "./../src/core/types.h"




void CRUX__iu08_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IU08 min = IU08_MIN;
  const IU08 max = IU08_MAX;
  const IU08 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "255";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU08_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU08_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU08_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__iu16_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IU16 min = IU16_MIN;
  const IU16 max = IU16_MAX;
  const IU16 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "65535";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU16_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU16_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU16_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__iu32_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IU32 min = IU32_MIN;
  const IU32 max = IU32_MAX;
  const IU32 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "4294967295";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU32_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU32_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU32_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__iu64_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IU64 min = IU64_MIN;
  const IU64 max = IU64_MAX;
  const IU64 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "18446744073709551615";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU64_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU64_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU64_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__is08_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IS08 min = IS08_MIN;
  const IS08 max = IS08_MAX;
  const IS08 one = 1;
  const char *const min_str = "-128";
  const char *const max_str = "127";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS08_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS08_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS08_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__is16_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IS16 min = IS16_MIN;
  const IS16 max = IS16_MAX;
  const IS16 one = 1;
  const char *const min_str = "-32768";
  const char *const max_str = "32767";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS16_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS16_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS16_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__is32_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IS32 min = IS32_MIN;
  const IS32 max = IS32_MAX;
  const IS32 one = 1;
  const char *const min_str = "-2147483648";
  const char *const max_str = "2147483647";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS32_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS32_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS32_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}


void CRUX__is64_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const IS64 min = IS64_MIN;
  const IS64 max = IS64_MAX;
  const IS64 one = 1;
  const char *const min_str = "-9223372036854775808";
  const char *const max_str = "9223372036854775807";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS64_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS64_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS64_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__int_precision_tests () {
  // 8
  const IU08 unsigned_integer_08 = IU08_MAX;
  const IU16 unsigned_integer_16 = IU16_MAX;
  const IU32 unsigned_integer_32 = IU32_MAX;
  const IU64 unsigned_integer_64 = IU64_MAX;
  const IS08 signed_integer_08 = IS08_MIN;
  const IS16 signed_integer_16 = IS16_MIN;
  const IS32 signed_integer_32 = IS32_MIN;
  const IS64 signed_integer_64 = IS64_MIN;
  ok((CRUX__get_int_precision(unsigned_integer_08) == 8), "Must has precision equals to %d.", 8);
  ok((CRUX__get_int_precision(unsigned_integer_16) == 16), "Must has precision equals to %d.", 16);
  ok((CRUX__get_int_precision(unsigned_integer_32) == 32), "Must has precision equals to %d.", 32);
  ok((CRUX__get_int_precision(unsigned_integer_64) == 64), "Must has precision equals to %d.", 64);
  ok((CRUX__get_int_precision(signed_integer_08) == 7), "Must has precision equals to %d.", 7);
  ok((CRUX__get_int_precision(signed_integer_16) == 15), "Must has precision equals to %d.", 15);
  ok((CRUX__get_int_precision(signed_integer_32) == 31), "Must has precision equals to %d.", 31);
  ok((CRUX__get_int_precision(signed_integer_64) == 63), "Must has precision equals to %d.", 63);
}


int main () {
  plan(32);
  CRUX__iu08_format_tests();
  CRUX__iu16_format_tests();
  CRUX__iu32_format_tests();
  CRUX__iu64_format_tests();
  CRUX__is08_format_tests();
  CRUX__is16_format_tests();
  CRUX__is32_format_tests();
  CRUX__is64_format_tests();
  CRUX__int_precision_tests();
  done_testing();
  return EXIT_SUCCESS;
}
