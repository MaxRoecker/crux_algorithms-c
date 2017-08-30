#include <string.h>
#include <tap.h>
#include "./../src/core/cast.h"



void CRUX__cast_iu08_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IU08_MAX;
  const iu16 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_iu16(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_iu16(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_iu16(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_iu16(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu08_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IU08_MAX;
  const iu32 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_iu32(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_iu32(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_iu32(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_iu32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu08_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IU08_MAX;
  const iu64 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_iu64(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_iu64(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_iu64(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu08_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is08(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is08(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is08(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu08_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IU08_MAX;
  const is16 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is16(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is16(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is16(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is16(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu08_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IU08_MAX;
  const is32 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is32(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is32(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is32(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu08_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IU08_MAX;
  const is64 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is64(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is64(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is64(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IU08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_iu08(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_iu08(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_iu08(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_iu08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IU16_MAX;
  const iu32 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_iu32(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_iu32(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_iu32(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_iu32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IU16_MAX;
  const iu64 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_iu64(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_iu64(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_iu64(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is08(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is08(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is08(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IS16_MAX;
  const is16 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is16(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is16(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is16(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IU16_MAX;
  const is32 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is32(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is32(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is32(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu16_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IU16_MAX;
  const is64 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is64(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is64(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is64(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IU08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_iu08(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_iu08(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_iu08(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_iu08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IU16_MAX;
  const iu16 tgt_min = IU16_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_iu16(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_iu16(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_iu16(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_iu16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IU32_MAX;
  const iu64 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_iu64(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_iu64(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_iu64(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is08(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is08(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is08(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IS16_MAX;
  const is16 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is16(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is16(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is16(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IS32_MAX;
  const is32 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is32(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is32(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is32(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is32(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu32_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IU32_MAX;
  const is64 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is64(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is64(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is64(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IU08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_iu08(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_iu08(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_iu08(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_iu08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IU16_MAX;
  const iu16 tgt_min = IU16_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_iu16(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_iu16(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_iu16(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_iu16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IU32_MAX;
  const iu32 tgt_min = IU32_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_iu32(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_iu32(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_iu32(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_iu32(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is08(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is08(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is08(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IS16_MAX;
  const is16 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is16(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is16(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is16(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IS32_MAX;
  const is32 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is32(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is32(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is32(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is32(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_iu64_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IS64_MAX;
  const is64 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is64(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is64(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is64(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is64(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IS08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu08(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu08(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu08(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu08(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IS08_MAX;
  const iu16 tgt_min = IU16_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu16(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu16(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu16(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu16(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IS08_MAX;
  const iu32 tgt_min = IU32_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu32(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu32(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu32(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IS08_MAX;
  const iu64 tgt_min = IU64_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_iu64(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_iu64(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_iu64(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IS08_MAX;
  const is16 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is16(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is16(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is16(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is16(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IS08_MAX;
  const is32 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is32(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is32(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is32(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is08_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IS08_MAX;
  const is64 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is64(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is64(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is64(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IU08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu08(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu08(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu08(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IS16_MAX;
  const iu16 tgt_min = IU16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu16(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu16(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu16(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu16(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IS16_MAX;
  const iu32 tgt_min = IU32_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu32(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu32(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu32(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IS16_MAX;
  const iu64 tgt_min = IU64_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_iu64(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_iu64(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_iu64(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IS08_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is08(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is08(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is08(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IS16_MAX;
  const is32 tgt_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is32(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is32(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is32(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is16_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IS16_MAX;
  const is64 tgt_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is64(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is64(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is64(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IU08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu08(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu08(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu08(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IU16_MAX;
  const iu16 tgt_min = IU16_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu16(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu16(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu16(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IS32_MAX;
  const iu32 tgt_min = IU32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu32(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu32(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu32(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IS32_MAX;
  const iu64 tgt_min = IU64_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_iu64(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_iu64(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_iu64(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IS08_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is08(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is08(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is08(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IS16_MAX;
  const is16 tgt_min = IS16_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is16(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is16(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is16(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is32_is64_test () {
  const is64 src_max = IS64_MAX;
  const is64 src_min = IS64_MIN;
  const is64 tgt_max = IS32_MAX;
  const is64 tgt_min = IS32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is64(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is64(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is64(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_iu08_test () {
  const iu08 src_max = IU08_MAX;
  const iu08 src_min = IU08_MIN;
  const iu08 tgt_max = IU08_MAX;
  const iu08 tgt_min = IU08_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu08(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu08(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu08(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_iu16_test () {
  const iu16 src_max = IU16_MAX;
  const iu16 src_min = IU16_MIN;
  const iu16 tgt_max = IU16_MAX;
  const iu16 tgt_min = IU16_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu16(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu16(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu16(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_iu32_test () {
  const iu32 src_max = IU32_MAX;
  const iu32 src_min = IU32_MIN;
  const iu32 tgt_max = IU32_MAX;
  const iu32 tgt_min = IU32_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu32(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu32(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu32(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu32(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_iu64_test () {
  const iu64 src_max = IU64_MAX;
  const iu64 src_min = IU64_MIN;
  const iu64 tgt_max = IS64_MAX;
  const iu64 tgt_min = IU64_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_iu64(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_iu64(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_iu64(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_iu64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_is08_test () {
  const is08 src_max = IS08_MAX;
  const is08 src_min = IS08_MIN;
  const is08 tgt_max = IS08_MAX;
  const is08 tgt_min = IS08_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_is08(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_is08(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_is08(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_is16_test () {
  const is16 src_max = IS16_MAX;
  const is16 src_min = IS16_MIN;
  const is16 tgt_max = IS16_MAX;
  const is16 tgt_min = IS16_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_is16(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_is16(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_is16(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_is16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}

void CRUX__cast_is64_is32_test () {
  const is32 src_max = IS32_MAX;
  const is32 src_min = IS32_MIN;
  const is32 tgt_max = IS32_MAX;
  const is32 tgt_min = IS32_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_is32(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_is32(src_min);
  CRUX__ResultIS64 tgt_max_cast = CRUX__cast_is64_is32(tgt_max);
  CRUX__ResultIS64 tgt_min_cast = CRUX__cast_is64_is32(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}



int main () {
  plan(224);
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
  done_testing();
  return EXIT_SUCCESS;
}
