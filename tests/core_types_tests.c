#include <string.h>
#include <talloc.h>
#include <tap.h>
#include "./../src/core/types.h"




void CRUX__iu08_format_tests () {
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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
  void *const ctx = talloc_new(nil(void));
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


void CRUX__null_of_tests () {
  const IU08 *iu08_nil = nil(IU08);
  const IU16 *iu16_nil = nil(IU16);
  const IU32 *iu32_nil = nil(IU32);
  const IU64 *iu64_nil = nil(IU64);
  const IS08 *is08_nil = nil(IS08);
  const IS16 *is16_nil = nil(IS16);
  const IS32 *is32_nil = nil(IS32);
  const IS64 *is64_nil = nil(IS64);
  ok((iu08_nil == ((IU08 *) 0)), "Must be nil.");
  ok((iu16_nil == ((IU16 *) 0)), "Must be nil.");
  ok((iu32_nil == ((IU32 *) 0)), "Must be nil.");
  ok((iu64_nil == ((IU64 *) 0)), "Must be nil.");
  ok((is08_nil == ((IS08 *) 0)), "Must be nil.");
  ok((is16_nil == ((IS16 *) 0)), "Must be nil.");
  ok((is32_nil == ((IS32 *) 0)), "Must be nil.");
  ok((is64_nil == ((IS64 *) 0)), "Must be nil.");
}


void CRUX__int_precision_tests () {
  const IU08 unsigned_integer_08 = CRUX__as_iu08(0);
  const IU16 unsigned_integer_16 = CRUX__as_iu16(0);
  const IU32 unsigned_integer_32 = CRUX__as_iu32(0);
  const IU64 unsigned_integer_64 = CRUX__as_iu64(0);
  const IS08 signed_integer_08 = CRUX__as_is08(0);
  const IS16 signed_integer_16 = CRUX__as_is16(0);
  const IS32 signed_integer_32 = CRUX__as_is32(0);
  const IS64 signed_integer_64 = CRUX__as_is64(0);
  ok((CRUX__get_int_precision(unsigned_integer_08) == 8), "Must has precision equals to %d.", 8);
  ok((CRUX__get_int_precision(unsigned_integer_16) == 16), "Must has precision equals to %d.", 16);
  ok((CRUX__get_int_precision(unsigned_integer_32) == 32), "Must has precision equals to %d.", 32);
  ok((CRUX__get_int_precision(unsigned_integer_64) == 64), "Must has precision equals to %d.", 64);
  ok((CRUX__get_int_precision(signed_integer_08) == 7), "Must has precision equals to %d.", 7);
  ok((CRUX__get_int_precision(signed_integer_16) == 15), "Must has precision equals to %d.", 15);
  ok((CRUX__get_int_precision(signed_integer_32) == 31), "Must has precision equals to %d.", 31);
  ok((CRUX__get_int_precision(signed_integer_64) == 63), "Must has precision equals to %d.", 63);
}


void CRUX__popcount_tests () {
  const IU08 iu08 = IU08_MAX;
  const IU16 iu16 = IU16_MAX;
  const IU32 iu32 = IU32_MAX;
  const IU64 iu64 = IU64_MAX;
  const IS08 is08 = IS08_MAX;
  const IS16 is16 = IS16_MAX;
  const IS32 is32 = IS32_MAX;
  const IS64 is64 = IS64_MAX;
  const Bool b = BOOL_MAX;
  const Char c = CHAR_MAX;
  const Size s = SIZE_MAX;
  const Size iu08_precision = CRUX__popcount(iu08);
  const Size iu16_precision = CRUX__popcount(iu16);
  const Size iu32_precision = CRUX__popcount(iu32);
  const Size iu64_precision = CRUX__popcount(iu64);
  const Size is08_precision = CRUX__popcount(is08);
  const Size is16_precision = CRUX__popcount(is16);
  const Size is32_precision = CRUX__popcount(is32);
  const Size is64_precision = CRUX__popcount(is64);
  const Size b_precision = CRUX__popcount(b);
  const Size c_precision = CRUX__popcount(c);
  const Size s_precision = CRUX__popcount(s);
  ok((iu08_precision == 8), "IU08 precision (%zu) equals to %d.", iu08_precision, 8);
  ok((iu16_precision == 16), "IU16 precision (%zu) equals to %d.", iu16_precision, 16);
  ok((iu32_precision == 32), "IU32 precision (%zu) equals to %d.", iu32_precision, 32);
  ok((iu64_precision == 64), "IU64 precision (%zu) equals to %d.", iu64_precision, 64);
  ok((is08_precision == 7), "IS08 precision (%zu) equals to %d.", is08_precision, 7);
  ok((is16_precision == 15), "IS16 precision (%zu) equals to %d.", is16_precision, 15);
  ok((is32_precision == 31), "IS32 precision (%zu) equals to %d.", is32_precision, 31);
  ok((is64_precision == 63), "IS64 precision (%zu) equals to %d.", is64_precision, 63);
  ok((b_precision != 0), "Bool precision (%zu) is not zero.", b_precision);
  ok((c_precision != 0), "Char precision (%zu) is not zero.", c_precision);
  ok((s_precision != 0), "Size precision (%zu) is not zero.", s_precision);
}



int main () {
  plan(51);
  CRUX__iu08_format_tests();
  CRUX__iu16_format_tests();
  CRUX__iu32_format_tests();
  CRUX__iu64_format_tests();
  CRUX__is08_format_tests();
  CRUX__is16_format_tests();
  CRUX__is32_format_tests();
  CRUX__is64_format_tests();
  CRUX__null_of_tests();
  CRUX__int_precision_tests();
  CRUX__popcount_tests();
  done_testing();
  return EXIT_SUCCESS;
}
