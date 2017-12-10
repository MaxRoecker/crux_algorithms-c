#include <tap.h>
#include "./../src/core/cast.h"




void CRUX__cast_iu08_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU08_MAX;
  const IU16 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_iu16(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_iu16(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_iu16(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_iu16(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu08_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU08_MAX;
  const IU32 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_iu32(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_iu32(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_iu32(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_iu32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu08_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IU08_MAX;
  const IU64 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_iu64(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_iu64(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_iu64(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu08_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is08(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is08(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is08(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu08_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IU08_MAX;
  const IS16 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is16(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is16(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is16(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is16(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu08_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IU08_MAX;
  const IS32 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is32(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is32(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is32(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu08_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IU08_MAX;
  const IS64 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is64(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is64(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is64(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_iu08(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_iu08(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_iu08(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_iu08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU16_MAX;
  const IU32 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_iu32(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_iu32(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_iu32(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_iu32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IU16_MAX;
  const IU64 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_iu64(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_iu64(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_iu64(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is08(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is08(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is08(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is16(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is16(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is16(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IU16_MAX;
  const IS32 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is32(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is32(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is32(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu16_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IU16_MAX;
  const IS64 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is64(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is64(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is64(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_iu08(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_iu08(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_iu08(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_iu08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_iu16(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_iu16(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_iu16(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_iu16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IU32_MAX;
  const IU64 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_iu64(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_iu64(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_iu64(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is08(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is08(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is08(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is16(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is16(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is16(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS32_MAX;
  const IS32 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is32(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is32(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is32(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is32(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu32_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IU32_MAX;
  const IS64 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is64(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is64(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is64(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_iu08(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_iu08(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_iu08(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_iu08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_iu16(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_iu16(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_iu16(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_iu16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU32_MAX;
  const IU32 tgt_min = IU32_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_iu32(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_iu32(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_iu32(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_iu32(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is08(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is08(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is08(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is16(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is16(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is16(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS32_MAX;
  const IS32 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is32(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is32(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is32(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is32(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_iu64_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS64_MAX;
  const IS64 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is64(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is64(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is64(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is64(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IS08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu08(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu08(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu08(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu08(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IS08_MAX;
  const IU16 tgt_min = IU16_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu16(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu16(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu16(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu16(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IS08_MAX;
  const IU32 tgt_min = IU32_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu32(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu32(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu32(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS08_MAX;
  const IU64 tgt_min = IU64_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu64(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu64(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu64(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS08_MAX;
  const IS16 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is16(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is16(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is16(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is16(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS08_MAX;
  const IS32 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is32(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is32(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is32(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is08_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS08_MAX;
  const IS64 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is64(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is64(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is64(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu08(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu08(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu08(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IS16_MAX;
  const IU16 tgt_min = IU16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu16(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu16(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu16(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu16(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IS16_MAX;
  const IU32 tgt_min = IU32_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu32(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu32(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu32(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS16_MAX;
  const IU64 tgt_min = IU64_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu64(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu64(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu64(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IS08_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is08(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is08(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is08(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS16_MAX;
  const IS32 tgt_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is32(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is32(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is32(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is16_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS16_MAX;
  const IS64 tgt_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is64(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is64(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is64(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu08(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu08(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu08(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu16(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu16(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu16(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IS32_MAX;
  const IU32 tgt_min = IU32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu32(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu32(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu32(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu32(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS32_MAX;
  const IU64 tgt_min = IU64_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu64(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu64(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu64(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IS08_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is08(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is08(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is08(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IS16_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is16(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is16(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is16(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is32_is64_test (void) {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS32_MAX;
  const IS64 tgt_min = IS32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is64(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is64(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is64(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(!CRUX__trace_check(src_min_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_iu08_test (void) {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu08(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu08(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu08(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_iu16_test (void) {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu16(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu16(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu16(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_iu32_test (void) {
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU32_MAX;
  const IU32 tgt_min = IU32_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu32(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu32(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu32(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu32(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_iu64_test (void) {
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS64_MAX;
  const IU64 tgt_min = IU64_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu64(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu64(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu64(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu64(tgt_min);
  ok(!CRUX__trace_check(src_max_cast.trace), "Must have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_is08_test (void) {
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IS08_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_is08(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_is08(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_is08(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_is08(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_is16_test (void) {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IS16_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_is16(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_is16(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_is16(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_is16(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}


void CRUX__cast_is64_is32_test (void) {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS32_MAX;
  const IS32 tgt_min = IS32_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_is32(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_is32(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_is32(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_is32(tgt_min);
  ok(CRUX__trace_check(src_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(src_min_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_max_cast.trace), "Must not have an error.");
  ok(CRUX__trace_check(tgt_min_cast.trace), "Must not have an error.");
  CRUX__trace_clean(&src_max_cast.trace);
  CRUX__trace_clean(&src_min_cast.trace);
  CRUX__trace_clean(&tgt_max_cast.trace);
  CRUX__trace_clean(&tgt_min_cast.trace);
}





void CRUX__cast_test (void) {
  const IU08 iu08_value = as_iu08(0);
  const IU16 iu16_value = as_iu16(0);
  const IU32 iu32_value = as_iu32(0);
  const IU64 iu64_value = as_iu64(0);
  const IS08 is08_value = as_is08(0);
  const IS16 is16_value = as_is16(0);
  const IS32 is32_value = as_is32(0);
  const IS64 is64_value = as_is64(0);
  
  CRUX__ResultIU08 iu16_cast_to_iu08 = CRUX__cast_to_iu08(iu16_value);
  CRUX__ResultIU08 iu32_cast_to_iu08 = CRUX__cast_to_iu08(iu32_value);
  CRUX__ResultIU08 iu64_cast_to_iu08 = CRUX__cast_to_iu08(iu64_value);
  CRUX__ResultIU08 is08_cast_to_iu08 = CRUX__cast_to_iu08(is08_value);
  CRUX__ResultIU08 is16_cast_to_iu08 = CRUX__cast_to_iu08(is16_value);
  CRUX__ResultIU08 is32_cast_to_iu08 = CRUX__cast_to_iu08(is32_value);
  CRUX__ResultIU08 is64_cast_to_iu08 = CRUX__cast_to_iu08(is64_value);

  CRUX__ResultIU16 iu08_cast_to_iu16 = CRUX__cast_to_iu16(iu08_value);
  CRUX__ResultIU16 iu32_cast_to_iu16 = CRUX__cast_to_iu16(iu32_value);
  CRUX__ResultIU16 iu64_cast_to_iu16 = CRUX__cast_to_iu16(iu64_value);
  CRUX__ResultIU16 is08_cast_to_iu16 = CRUX__cast_to_iu16(is08_value);
  CRUX__ResultIU16 is16_cast_to_iu16 = CRUX__cast_to_iu16(is16_value);
  CRUX__ResultIU16 is32_cast_to_iu16 = CRUX__cast_to_iu16(is32_value);
  CRUX__ResultIU16 is64_cast_to_iu16 = CRUX__cast_to_iu16(is64_value);
  
  CRUX__ResultIU32 iu08_cast_to_iu32 = CRUX__cast_to_iu32(iu08_value);
  CRUX__ResultIU32 iu16_cast_to_iu32 = CRUX__cast_to_iu32(iu16_value);
  CRUX__ResultIU32 iu64_cast_to_iu32 = CRUX__cast_to_iu32(iu64_value);
  CRUX__ResultIU32 is08_cast_to_iu32 = CRUX__cast_to_iu32(is08_value);
  CRUX__ResultIU32 is16_cast_to_iu32 = CRUX__cast_to_iu32(is16_value);
  CRUX__ResultIU32 is32_cast_to_iu32 = CRUX__cast_to_iu32(is32_value);
  CRUX__ResultIU32 is64_cast_to_iu32 = CRUX__cast_to_iu32(is64_value);
  
  CRUX__ResultIU64 iu08_cast_to_iu64 = CRUX__cast_to_iu64(iu08_value);
  CRUX__ResultIU64 iu16_cast_to_iu64 = CRUX__cast_to_iu64(iu16_value);
  CRUX__ResultIU64 iu32_cast_to_iu64 = CRUX__cast_to_iu64(iu32_value);
  CRUX__ResultIU64 is08_cast_to_iu64 = CRUX__cast_to_iu64(is08_value);
  CRUX__ResultIU64 is16_cast_to_iu64 = CRUX__cast_to_iu64(is16_value);
  CRUX__ResultIU64 is32_cast_to_iu64 = CRUX__cast_to_iu64(is32_value);
  CRUX__ResultIU64 is64_cast_to_iu64 = CRUX__cast_to_iu64(is64_value);
  
  CRUX__ResultIS08 iu08_cast_to_is08 = CRUX__cast_to_is08(iu08_value);
  CRUX__ResultIS08 iu16_cast_to_is08 = CRUX__cast_to_is08(iu16_value);
  CRUX__ResultIS08 iu32_cast_to_is08 = CRUX__cast_to_is08(iu32_value);
  CRUX__ResultIS08 iu64_cast_to_is08 = CRUX__cast_to_is08(iu64_value);
  CRUX__ResultIS08 is16_cast_to_is08 = CRUX__cast_to_is08(is16_value);
  CRUX__ResultIS08 is32_cast_to_is08 = CRUX__cast_to_is08(is32_value);
  CRUX__ResultIS08 is64_cast_to_is08 = CRUX__cast_to_is08(is64_value);
  
  CRUX__ResultIS16 iu08_cast_to_is16 = CRUX__cast_to_is16(iu08_value);
  CRUX__ResultIS16 iu16_cast_to_is16 = CRUX__cast_to_is16(iu16_value);
  CRUX__ResultIS16 iu32_cast_to_is16 = CRUX__cast_to_is16(iu32_value);
  CRUX__ResultIS16 iu64_cast_to_is16 = CRUX__cast_to_is16(iu64_value);
  CRUX__ResultIS16 is08_cast_to_is16 = CRUX__cast_to_is16(is08_value);
  CRUX__ResultIS16 is32_cast_to_is16 = CRUX__cast_to_is16(is32_value);
  CRUX__ResultIS16 is64_cast_to_is16 = CRUX__cast_to_is16(is64_value);
  
  CRUX__ResultIS32 iu08_cast_to_is32 = CRUX__cast_to_is32(iu08_value);
  CRUX__ResultIS32 iu16_cast_to_is32 = CRUX__cast_to_is32(iu16_value);
  CRUX__ResultIS32 iu32_cast_to_is32 = CRUX__cast_to_is32(iu32_value);
  CRUX__ResultIS32 iu64_cast_to_is32 = CRUX__cast_to_is32(iu64_value);
  CRUX__ResultIS32 is08_cast_to_is32 = CRUX__cast_to_is32(is08_value);
  CRUX__ResultIS32 is16_cast_to_is32 = CRUX__cast_to_is32(is16_value);
  CRUX__ResultIS32 is64_cast_to_is32 = CRUX__cast_to_is32(is64_value);
  
  CRUX__ResultIS64 iu08_cast_to_is64 = CRUX__cast_to_is64(iu08_value);
  CRUX__ResultIS64 iu16_cast_to_is64 = CRUX__cast_to_is64(iu16_value);
  CRUX__ResultIS64 iu32_cast_to_is64 = CRUX__cast_to_is64(iu32_value);
  CRUX__ResultIS64 iu64_cast_to_is64 = CRUX__cast_to_is64(iu64_value);
  CRUX__ResultIS64 is08_cast_to_is64 = CRUX__cast_to_is64(is08_value);
  CRUX__ResultIS64 is16_cast_to_is64 = CRUX__cast_to_is64(is16_value);
  CRUX__ResultIS64 is32_cast_to_is64 = CRUX__cast_to_is64(is32_value);
  
  ok(CRUX__trace_check(iu16_cast_to_iu08.trace), "Must not have an error.");
  ok((iu16_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_iu08.trace), "Must not have an error.");
  ok((iu32_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_iu08.trace), "Must not have an error.");
  ok((iu64_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_iu08.trace), "Must not have an error.");
  ok((is08_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_iu08.trace), "Must not have an error.");
  ok((is16_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_iu08.trace), "Must not have an error.");
  ok((is32_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_iu08.trace), "Must not have an error.");
  ok((is64_cast_to_iu08.value == as_iu08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_iu16.trace), "Must not have an error.");
  ok((iu08_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_iu16.trace), "Must not have an error.");
  ok((iu32_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_iu16.trace), "Must not have an error.");
  ok((iu64_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_iu16.trace), "Must not have an error.");
  ok((is08_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_iu16.trace), "Must not have an error.");
  ok((is16_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_iu16.trace), "Must not have an error.");
  ok((is32_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_iu16.trace), "Must not have an error.");
  ok((is64_cast_to_iu16.value == as_iu16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_iu32.trace), "Must not have an error.");
  ok((iu08_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu16_cast_to_iu32.trace), "Must not have an error.");
  ok((iu16_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_iu32.trace), "Must not have an error.");
  ok((iu64_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_iu32.trace), "Must not have an error.");
  ok((is08_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_iu32.trace), "Must not have an error.");
  ok((is16_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_iu32.trace), "Must not have an error.");
  ok((is32_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_iu32.trace), "Must not have an error.");
  ok((is64_cast_to_iu32.value == as_iu32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_iu64.trace), "Must not have an error.");
  ok((iu08_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu16_cast_to_iu64.trace), "Must not have an error.");
  ok((iu16_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_iu64.trace), "Must not have an error.");
  ok((iu32_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_iu64.trace), "Must not have an error.");
  ok((is08_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_iu64.trace), "Must not have an error.");
  ok((is16_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_iu64.trace), "Must not have an error.");
  ok((is32_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_iu64.trace), "Must not have an error.");
  ok((is64_cast_to_iu64.value == as_iu64(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_is08.trace), "Must not have an error.");
  ok((iu08_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu16_cast_to_is08.trace), "Must not have an error.");
  ok((iu16_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_is08.trace), "Must not have an error.");
  ok((iu32_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_is08.trace), "Must not have an error.");
  ok((iu64_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_is08.trace), "Must not have an error.");
  ok((is16_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_is08.trace), "Must not have an error.");
  ok((is32_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_is08.trace), "Must not have an error.");
  ok((is64_cast_to_is08.value == as_is08(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_is16.trace), "Must not have an error.");
  ok((iu08_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu16_cast_to_is16.trace), "Must not have an error.");
  ok((iu16_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_is16.trace), "Must not have an error.");
  ok((iu32_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_is16.trace), "Must not have an error.");
  ok((iu64_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_is16.trace), "Must not have an error.");
  ok((is08_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_is16.trace), "Must not have an error.");
  ok((is32_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_is16.trace), "Must not have an error.");
  ok((is64_cast_to_is16.value == as_is16(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_is32.trace), "Must not have an error.");
  ok((iu08_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu16_cast_to_is32.trace), "Must not have an error.");
  ok((iu16_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_is32.trace), "Must not have an error.");
  ok((iu32_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_is32.trace), "Must not have an error.");
  ok((iu64_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_is32.trace), "Must not have an error.");
  ok((is08_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_is32.trace), "Must not have an error.");
  ok((is16_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(is64_cast_to_is32.trace), "Must not have an error.");
  ok((is64_cast_to_is32.value == as_is32(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu08_cast_to_is64.trace), "Must not have an error.");
  ok((iu08_cast_to_is64.value == as_is64(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu16_cast_to_is64.trace), "Must not have an error.");
  ok((iu16_cast_to_is64.value == as_is64(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu32_cast_to_is64.trace), "Must not have an error.");
  ok((iu32_cast_to_is64.value == as_is64(0)), "The result must be 0.");
  ok(CRUX__trace_check(iu64_cast_to_is64.trace), "Must not have an error.");
  ok((iu64_cast_to_is64.value == as_is64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is08_cast_to_is64.trace), "Must not have an error.");
  ok((is08_cast_to_is64.value == as_is64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is16_cast_to_is64.trace), "Must not have an error.");
  ok((is16_cast_to_is64.value == as_is64(0)), "The result must be 0.");
  ok(CRUX__trace_check(is32_cast_to_is64.trace), "Must not have an error.");
  ok((is32_cast_to_is64.value == as_is64(0)), "The result must be 0.");

  CRUX__trace_clean(&iu16_cast_to_iu08.trace);
  CRUX__trace_clean(&iu32_cast_to_iu08.trace);
  CRUX__trace_clean(&iu64_cast_to_iu08.trace);
  CRUX__trace_clean(&is08_cast_to_iu08.trace);
  CRUX__trace_clean(&is16_cast_to_iu08.trace);
  CRUX__trace_clean(&is32_cast_to_iu08.trace);
  CRUX__trace_clean(&is64_cast_to_iu08.trace);
  CRUX__trace_clean(&iu08_cast_to_iu16.trace);
  CRUX__trace_clean(&iu32_cast_to_iu16.trace);
  CRUX__trace_clean(&iu64_cast_to_iu16.trace);
  CRUX__trace_clean(&is08_cast_to_iu16.trace);
  CRUX__trace_clean(&is16_cast_to_iu16.trace);
  CRUX__trace_clean(&is32_cast_to_iu16.trace);
  CRUX__trace_clean(&is64_cast_to_iu16.trace);
  CRUX__trace_clean(&iu08_cast_to_iu32.trace);
  CRUX__trace_clean(&iu16_cast_to_iu32.trace);
  CRUX__trace_clean(&iu64_cast_to_iu32.trace);
  CRUX__trace_clean(&is08_cast_to_iu32.trace);
  CRUX__trace_clean(&is16_cast_to_iu32.trace);
  CRUX__trace_clean(&is32_cast_to_iu32.trace);
  CRUX__trace_clean(&is64_cast_to_iu32.trace);
  CRUX__trace_clean(&iu08_cast_to_iu64.trace);
  CRUX__trace_clean(&iu16_cast_to_iu64.trace);
  CRUX__trace_clean(&iu32_cast_to_iu64.trace);
  CRUX__trace_clean(&is08_cast_to_iu64.trace);
  CRUX__trace_clean(&is16_cast_to_iu64.trace);
  CRUX__trace_clean(&is32_cast_to_iu64.trace);
  CRUX__trace_clean(&is64_cast_to_iu64.trace);
  CRUX__trace_clean(&iu08_cast_to_is08.trace);
  CRUX__trace_clean(&iu16_cast_to_is08.trace);
  CRUX__trace_clean(&iu32_cast_to_is08.trace);
  CRUX__trace_clean(&iu64_cast_to_is08.trace);
  CRUX__trace_clean(&is16_cast_to_is08.trace);
  CRUX__trace_clean(&is32_cast_to_is08.trace);
  CRUX__trace_clean(&is64_cast_to_is08.trace);
  CRUX__trace_clean(&iu08_cast_to_is16.trace);
  CRUX__trace_clean(&iu16_cast_to_is16.trace);
  CRUX__trace_clean(&iu32_cast_to_is16.trace);
  CRUX__trace_clean(&iu64_cast_to_is16.trace);
  CRUX__trace_clean(&is08_cast_to_is16.trace);
  CRUX__trace_clean(&is32_cast_to_is16.trace);
  CRUX__trace_clean(&is64_cast_to_is16.trace);
  CRUX__trace_clean(&iu08_cast_to_is32.trace);
  CRUX__trace_clean(&iu16_cast_to_is32.trace);
  CRUX__trace_clean(&iu32_cast_to_is32.trace);
  CRUX__trace_clean(&iu64_cast_to_is32.trace);
  CRUX__trace_clean(&is08_cast_to_is32.trace);
  CRUX__trace_clean(&is16_cast_to_is32.trace);
  CRUX__trace_clean(&is64_cast_to_is32.trace);
  CRUX__trace_clean(&iu08_cast_to_is64.trace);
  CRUX__trace_clean(&iu16_cast_to_is64.trace);
  CRUX__trace_clean(&iu32_cast_to_is64.trace);
  CRUX__trace_clean(&iu64_cast_to_is64.trace);
  CRUX__trace_clean(&is08_cast_to_is64.trace);
  CRUX__trace_clean(&is16_cast_to_is64.trace);
  CRUX__trace_clean(&is32_cast_to_is64.trace);
}


int main (int argc, char *argv[]) {
  plan(336);
  CRUX__cast_iu08_iu16_test();
  CRUX__cast_iu08_iu32_test();
  CRUX__cast_iu08_iu64_test();
  CRUX__cast_iu08_is08_test();
  CRUX__cast_iu08_is16_test();
  CRUX__cast_iu08_is32_test();
  CRUX__cast_iu08_is64_test();
  CRUX__cast_iu16_iu08_test();
  CRUX__cast_iu16_iu32_test();
  CRUX__cast_iu16_iu64_test();
  CRUX__cast_iu16_is08_test();
  CRUX__cast_iu16_is16_test();
  CRUX__cast_iu16_is32_test();
  CRUX__cast_iu16_is64_test();
  CRUX__cast_iu32_iu08_test();
  CRUX__cast_iu32_iu16_test();
  CRUX__cast_iu32_iu64_test();
  CRUX__cast_iu32_is08_test();
  CRUX__cast_iu32_is16_test();
  CRUX__cast_iu32_is32_test();
  CRUX__cast_iu32_is64_test();
  CRUX__cast_iu64_iu08_test();
  CRUX__cast_iu64_iu16_test();
  CRUX__cast_iu64_iu32_test();
  CRUX__cast_iu64_is08_test();
  CRUX__cast_iu64_is16_test();
  CRUX__cast_iu64_is32_test();
  CRUX__cast_iu64_is64_test();
  CRUX__cast_is08_iu08_test();
  CRUX__cast_is08_iu16_test();
  CRUX__cast_is08_iu32_test();
  CRUX__cast_is08_iu64_test();
  CRUX__cast_is08_is16_test();
  CRUX__cast_is08_is32_test();
  CRUX__cast_is08_is64_test();
  CRUX__cast_is16_iu08_test();
  CRUX__cast_is16_iu16_test();
  CRUX__cast_is16_iu32_test();
  CRUX__cast_is16_iu64_test();
  CRUX__cast_is16_is08_test();
  CRUX__cast_is16_is32_test();
  CRUX__cast_is16_is64_test();
  CRUX__cast_is32_iu08_test();
  CRUX__cast_is32_iu16_test();
  CRUX__cast_is32_iu32_test();
  CRUX__cast_is32_iu64_test();
  CRUX__cast_is32_is08_test();
  CRUX__cast_is32_is16_test();
  CRUX__cast_is32_is64_test();
  CRUX__cast_is64_iu08_test();
  CRUX__cast_is64_iu16_test();
  CRUX__cast_is64_iu32_test();
  CRUX__cast_is64_iu64_test();
  CRUX__cast_is64_is08_test();
  CRUX__cast_is64_is16_test();
  CRUX__cast_is64_is32_test();
  CRUX__cast_test();
  done_testing();
  return EXIT_SUCCESS;
}
