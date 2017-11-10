#include <tap.h>
#include "./../src/arithmetic/abs.h"


void CRUX_ARITH__abs_iu08_test (void) {
  const IU08 max = IU08_MAX;
  const IU08 min = IU08_MIN;
  const IU08 max_abs = IU08_MAX;
  const IU08 min_abs = IU08_MIN;
  CRUX__ResultIU08 max_abs_result = CRUX_ARITH__abs_iu08(max);
  CRUX__ResultIU08 min_abs_result = CRUX_ARITH__abs_iu08(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IU08_FMT".", max_abs);
  ok(CRUX__trace_check(min_abs_result.trace), "Must not have an error.");
  ok((min_abs_result.value == min_abs), "The absolute value must be equal to %"IU08_FMT".", min_abs);
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_iu16_test (void) {
  const IU16 max = IU16_MAX;
  const IU16 min = IU16_MIN;
  const IU16 max_abs = IU16_MAX;
  const IU16 min_abs = IU16_MIN;
  CRUX__ResultIU16 max_abs_result = CRUX_ARITH__abs_iu16(max);
  CRUX__ResultIU16 min_abs_result = CRUX_ARITH__abs_iu16(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IU16_FMT".", max_abs);
  ok(CRUX__trace_check(min_abs_result.trace), "Must not have an error.");
  ok((min_abs_result.value == min_abs), "The absolute value must be equal to %"IU16_FMT".", min_abs);
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_iu32_test (void) {
  const IU32 max = IU32_MAX;
  const IU32 min = IU32_MIN;
  const IU32 max_abs = IU32_MAX;
  const IU32 min_abs = IU32_MIN;
  CRUX__ResultIU32 max_abs_result = CRUX_ARITH__abs_iu32(max);
  CRUX__ResultIU32 min_abs_result = CRUX_ARITH__abs_iu32(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IU32_FMT".", max_abs);
  ok(CRUX__trace_check(min_abs_result.trace), "Must not have an error.");
  ok((min_abs_result.value == min_abs), "The absolute value must be equal to %"IU32_FMT".", min_abs);
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_iu64_test (void) {
  const IU64 max = IU64_MAX;
  const IU64 min = IU64_MIN;
  const IU64 max_abs = IU64_MAX;
  const IU64 min_abs = IU64_MIN;
  CRUX__ResultIU64 max_abs_result = CRUX_ARITH__abs_iu64(max);
  CRUX__ResultIU64 min_abs_result = CRUX_ARITH__abs_iu64(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IU64_FMT".", max_abs);
  ok(CRUX__trace_check(min_abs_result.trace), "Must not have an error.");
  ok((min_abs_result.value == min_abs), "The absolute value must be equal to %"IU64_FMT".", min_abs);
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_is08_test (void) {
  const IS08 max = IS08_MAX;
  const IS08 negative = IS08_MIN + CRUX__as_is08(1);
  const IS08 min = IS08_MIN;
  const IS08 max_abs = IS08_MAX;
  const IS08 negative_abs = IS08_MAX;
  CRUX__ResultIS08 max_abs_result = CRUX_ARITH__abs_is08(max);
  CRUX__ResultIS08 negative_abs_result = CRUX_ARITH__abs_is08(negative);
  CRUX__ResultIS08 min_abs_result = CRUX_ARITH__abs_is08(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IS08_FMT".", max_abs);
  ok(CRUX__trace_check(negative_abs_result.trace), "Must not have an error.");
  ok((negative_abs_result.value == negative_abs), "The absolute value must be equal to %"IS08_FMT".", negative_abs);
  ok(!CRUX__trace_check(min_abs_result.trace), "Must have an error.");
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&negative_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_is16_test (void) {
  const IS16 max = IS16_MAX;
  const IS16 negative = IS16_MIN + CRUX__as_is16(1);
  const IS16 min = IS16_MIN;
  const IS16 max_abs = IS16_MAX;
  const IS16 negative_abs = IS16_MAX;
  CRUX__ResultIS16 max_abs_result = CRUX_ARITH__abs_is16(max);
  CRUX__ResultIS16 negative_abs_result = CRUX_ARITH__abs_is16(negative);
  CRUX__ResultIS16 min_abs_result = CRUX_ARITH__abs_is16(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IS16_FMT".", max_abs);
  ok(CRUX__trace_check(negative_abs_result.trace), "Must not have an error.");
  ok((negative_abs_result.value == negative_abs), "The absolute value must be equal to %"IS16_FMT".", negative_abs);
  ok(!CRUX__trace_check(min_abs_result.trace), "Must have an error.");
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&negative_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_is32_test (void) {
  const IS32 max = IS32_MAX;
  const IS32 negative = IS32_MIN + CRUX__as_is32(1);
  const IS32 min = IS32_MIN;
  const IS32 max_abs = IS32_MAX;
  const IS32 negative_abs = IS32_MAX;
  CRUX__ResultIS32 max_abs_result = CRUX_ARITH__abs_is32(max);
  CRUX__ResultIS32 negative_abs_result = CRUX_ARITH__abs_is32(negative);
  CRUX__ResultIS32 min_abs_result = CRUX_ARITH__abs_is32(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IS32_FMT".", max_abs);
  ok(CRUX__trace_check(negative_abs_result.trace), "Must not have an error.");
  ok((negative_abs_result.value == negative_abs), "The absolute value must be equal to %"IS32_FMT".", negative_abs);
  ok(!CRUX__trace_check(min_abs_result.trace), "Must have an error.");
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&negative_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_is64_test (void) {
  const IS64 max = IS64_MAX;
  const IS64 negative = IS64_MIN + CRUX__as_is64(1);
  const IS64 min = IS64_MIN;
  const IS64 max_abs = IS64_MAX;
  const IS64 negative_abs = IS64_MAX;
  CRUX__ResultIS64 max_abs_result = CRUX_ARITH__abs_is64(max);
  CRUX__ResultIS64 negative_abs_result = CRUX_ARITH__abs_is64(negative);
  CRUX__ResultIS64 min_abs_result = CRUX_ARITH__abs_is64(min);
  ok(CRUX__trace_check(max_abs_result.trace), "Must not have an error.");
  ok((max_abs_result.value == max_abs), "The absolute value must be equal to %"IS64_FMT".", max_abs);
  ok(CRUX__trace_check(negative_abs_result.trace), "Must not have an error.");
  ok((negative_abs_result.value == negative_abs), "The absolute value must be equal to %"IS64_FMT".", negative_abs);
  ok(!CRUX__trace_check(min_abs_result.trace), "Must have an error.");
  CRUX__trace_clean(&max_abs_result.trace);
  CRUX__trace_clean(&negative_abs_result.trace);
  CRUX__trace_clean(&min_abs_result.trace);
}


void CRUX_ARITH__abs_test (void) {
  const IU08 iu08_value = CRUX__as_iu08(0);
  const IU16 iu16_value = CRUX__as_iu16(0);
  const IU32 iu32_value = CRUX__as_iu32(0);
  const IU64 iu64_value = CRUX__as_iu64(0);
  const IS08 is08_value = CRUX__as_is08(0);
  const IS16 is16_value = CRUX__as_is16(0);
  const IS32 is32_value = CRUX__as_is32(0);
  const IS64 is64_value = CRUX__as_is64(0);
  CRUX__ResultIU08 iu08_result = CRUX_ARITH__abs(iu08_value);
  CRUX__ResultIU16 iu16_result = CRUX_ARITH__abs(iu16_value);
  CRUX__ResultIU32 iu32_result = CRUX_ARITH__abs(iu32_value);
  CRUX__ResultIU64 iu64_result = CRUX_ARITH__abs(iu64_value);
  CRUX__ResultIS08 is08_result = CRUX_ARITH__abs(is08_value);
  CRUX__ResultIS16 is16_result = CRUX_ARITH__abs(is16_value);
  CRUX__ResultIS32 is32_result = CRUX_ARITH__abs(is32_value);
  CRUX__ResultIS64 is64_result = CRUX_ARITH__abs(is64_value);
  ok(CRUX__trace_check(iu08_result.trace), "Must not have an error.");
  ok((iu08_result.value == CRUX__as_iu08(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(iu16_result.trace), "Must not have an error.");
  ok((iu16_result.value == CRUX__as_iu16(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(iu32_result.trace), "Must not have an error.");
  ok((iu32_result.value == CRUX__as_iu32(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(iu64_result.trace), "Must not have an error.");
  ok((iu64_result.value == CRUX__as_iu64(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(is08_result.trace), "Must not have an error.");
  ok((is08_result.value == CRUX__as_is08(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(is16_result.trace), "Must not have an error.");
  ok((is16_result.value == CRUX__as_is16(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(is32_result.trace), "Must not have an error.");
  ok((is32_result.value == CRUX__as_is32(0)), "Must be equal to 0.");
  ok(CRUX__trace_check(is64_result.trace), "Must not have an error.");
  ok((is64_result.value == CRUX__as_is64(0)), "Must be equal to 0.");
  CRUX__trace_clean(&iu08_result.trace);
  CRUX__trace_clean(&iu16_result.trace);
  CRUX__trace_clean(&iu32_result.trace);
  CRUX__trace_clean(&iu64_result.trace);
  CRUX__trace_clean(&is08_result.trace);
  CRUX__trace_clean(&is16_result.trace);
  CRUX__trace_clean(&is32_result.trace);
  CRUX__trace_clean(&is64_result.trace);
}


int main (int argc, char *argv[]) {
  plan(52);
  CRUX_ARITH__abs_iu08_test();
  CRUX_ARITH__abs_iu16_test();
  CRUX_ARITH__abs_iu32_test();
  CRUX_ARITH__abs_iu64_test();
  CRUX_ARITH__abs_is08_test();
  CRUX_ARITH__abs_is16_test();
  CRUX_ARITH__abs_is32_test();
  CRUX_ARITH__abs_is64_test();
  CRUX_ARITH__abs_test();
  done_testing();
  return EXIT_SUCCESS;
}
