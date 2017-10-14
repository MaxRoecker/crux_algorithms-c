#include <string.h>
#include <tap.h>
#include "./../src/core/cast.h"




void CRUX__cast_iu08_iu16_test () {
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU08_MAX;
  const IU16 tgt_min = IU08_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU08_MAX;
  const IU32 tgt_min = IU08_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IU08_MAX;
  const IU64 tgt_min = IU08_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_is08(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_is08(src_min);
  CRUX__ResultIU08 tgt_max_cast = CRUX__cast_iu08_is08(tgt_max);
  CRUX__ResultIU08 tgt_min_cast = CRUX__cast_iu08_is08(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_iu08_is16_test () {
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IU08_MAX;
  const IS16 tgt_min = IU08_MIN;
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
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IU08_MAX;
  const IS32 tgt_min = IU08_MIN;
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
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IU08_MAX;
  const IS64 tgt_min = IU08_MIN;
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
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU16_MAX;
  const IU32 tgt_min = IU16_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IU16_MAX;
  const IU64 tgt_min = IU16_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU16_MIN;
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
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_is16(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_is16(src_min);
  CRUX__ResultIU16 tgt_max_cast = CRUX__cast_iu16_is16(tgt_max);
  CRUX__ResultIU16 tgt_min_cast = CRUX__cast_iu16_is16(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_iu16_is32_test () {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IU16_MAX;
  const IS32 tgt_min = IU16_MIN;
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
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IU16_MAX;
  const IS64 tgt_min = IU16_MIN;
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
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IU32_MAX;
  const IU64 tgt_min = IU32_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU32_MIN;
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
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IU32_MIN;
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
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS32_MAX;
  const IS32 tgt_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_is32(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_is32(src_min);
  CRUX__ResultIU32 tgt_max_cast = CRUX__cast_iu32_is32(tgt_max);
  CRUX__ResultIU32 tgt_min_cast = CRUX__cast_iu32_is32(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_iu32_is64_test () {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IU32_MAX;
  const IS64 tgt_min = IU32_MIN;
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
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU32_MAX;
  const IU32 tgt_min = IU32_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IU64_MIN;
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
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IU64_MIN;
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
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS32_MAX;
  const IS32 tgt_min = IU64_MIN;
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
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS64_MAX;
  const IS64 tgt_min = IU64_MIN;
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_is64(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_is64(src_min);
  CRUX__ResultIU64 tgt_max_cast = CRUX__cast_iu64_is64(tgt_max);
  CRUX__ResultIU64 tgt_min_cast = CRUX__cast_iu64_is64(tgt_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is08_iu08_test () {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IS08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IS08_MAX;
  const IU16 tgt_min = IU16_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IS08_MAX;
  const IU32 tgt_min = IU32_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS08_MAX;
  const IU64 tgt_min = IU64_MIN;
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
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS08_MAX;
  const IS16 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is16(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is16(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is16(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is16(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is08_is32_test () {
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS08_MAX;
  const IS32 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is32(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is32(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is32(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is08_is64_test () {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS08_MAX;
  const IS64 tgt_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_is64(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_is64(src_min);
  CRUX__ResultIS08 tgt_max_cast = CRUX__cast_is08_is64(tgt_max);
  CRUX__ResultIS08 tgt_min_cast = CRUX__cast_is08_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is16_iu08_test () {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IS16_MAX;
  const IU16 tgt_min = IU16_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IS16_MAX;
  const IU32 tgt_min = IU32_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS16_MAX;
  const IU64 tgt_min = IU64_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IS08_MIN;
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
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS16_MAX;
  const IS32 tgt_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is32(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is32(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is32(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is32(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is16_is64_test () {
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS16_MAX;
  const IS64 tgt_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_is64(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_is64(src_min);
  CRUX__ResultIS16 tgt_max_cast = CRUX__cast_is16_is64(tgt_max);
  CRUX__ResultIS16 tgt_min_cast = CRUX__cast_is16_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is32_iu08_test () {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IS32_MAX;
  const IU32 tgt_min = IU32_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS32_MAX;
  const IU64 tgt_min = IU64_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IS08_MIN;
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
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IS16_MIN;
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
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 tgt_max = IS32_MAX;
  const IS64 tgt_min = IS32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_is64(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_is64(src_min);
  CRUX__ResultIS32 tgt_max_cast = CRUX__cast_is32_is64(tgt_max);
  CRUX__ResultIS32 tgt_min_cast = CRUX__cast_is32_is64(tgt_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((tgt_max_cast.occ == NULL), "Must not have an error.");
  ok((tgt_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&tgt_max_cast.occ);
  CRUX__occurrences_clean(&tgt_min_cast.occ);
}


void CRUX__cast_is64_iu08_test () {
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 tgt_max = IU08_MAX;
  const IU08 tgt_min = IU08_MIN;
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
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 tgt_max = IU16_MAX;
  const IU16 tgt_min = IU16_MIN;
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
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 tgt_max = IU32_MAX;
  const IU32 tgt_min = IU32_MIN;
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
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 tgt_max = IS64_MAX;
  const IU64 tgt_min = IU64_MIN;
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
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 tgt_max = IS08_MAX;
  const IS08 tgt_min = IS08_MIN;
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
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 tgt_max = IS16_MAX;
  const IS16 tgt_min = IS16_MIN;
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
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 tgt_max = IS32_MAX;
  const IS32 tgt_min = IS32_MIN;
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


void CRUX__cast_iu08_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = IU08_MAX;
  const FLP1 target_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_flp1(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_flp1(src_min);
  CRUX__ResultIU08 src_smallest_cast = CRUX__cast_iu08_flp1(src_smallest);
  CRUX__ResultIU08 truncated_pos_cast = CRUX__cast_iu08_flp1(truncated_pos);
  CRUX__ResultIU08 truncated_neg_cast = CRUX__cast_iu08_flp1(truncated_neg);
  CRUX__ResultIU08 target_max_cast = CRUX__cast_iu08_flp1(target_max);
  CRUX__ResultIU08 target_min_cast = CRUX__cast_iu08_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu08_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = IU08_MAX;
  const FLP2 target_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_flp2(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_flp2(src_min);
  CRUX__ResultIU08 src_smallest_cast = CRUX__cast_iu08_flp2(src_smallest);
  CRUX__ResultIU08 truncated_pos_cast = CRUX__cast_iu08_flp2(truncated_pos);
  CRUX__ResultIU08 truncated_neg_cast = CRUX__cast_iu08_flp2(truncated_neg);
  CRUX__ResultIU08 target_max_cast = CRUX__cast_iu08_flp2(target_max);
  CRUX__ResultIU08 target_min_cast = CRUX__cast_iu08_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu08_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IU08_MAX;
  const FLP4 target_min = IU08_MIN;
  CRUX__ResultIU08 src_max_cast = CRUX__cast_iu08_flp4(src_max);
  CRUX__ResultIU08 src_min_cast = CRUX__cast_iu08_flp4(src_min);
  CRUX__ResultIU08 src_smallest_cast = CRUX__cast_iu08_flp4(src_smallest);
  CRUX__ResultIU08 truncated_pos_cast = CRUX__cast_iu08_flp4(truncated_pos);
  CRUX__ResultIU08 truncated_neg_cast = CRUX__cast_iu08_flp4(truncated_neg);
  CRUX__ResultIU08 target_max_cast = CRUX__cast_iu08_flp4(target_max);
  CRUX__ResultIU08 target_min_cast = CRUX__cast_iu08_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu16_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = IU16_MAX;
  const FLP1 target_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_flp1(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_flp1(src_min);
  CRUX__ResultIU16 src_smallest_cast = CRUX__cast_iu16_flp1(src_smallest);
  CRUX__ResultIU16 truncated_pos_cast = CRUX__cast_iu16_flp1(truncated_pos);
  CRUX__ResultIU16 truncated_neg_cast = CRUX__cast_iu16_flp1(truncated_neg);
  CRUX__ResultIU16 target_max_cast = CRUX__cast_iu16_flp1(target_max);
  CRUX__ResultIU16 target_min_cast = CRUX__cast_iu16_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu16_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = IU16_MAX;
  const FLP2 target_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_flp2(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_flp2(src_min);
  CRUX__ResultIU16 src_smallest_cast = CRUX__cast_iu16_flp2(src_smallest);
  CRUX__ResultIU16 truncated_pos_cast = CRUX__cast_iu16_flp2(truncated_pos);
  CRUX__ResultIU16 truncated_neg_cast = CRUX__cast_iu16_flp2(truncated_neg);
  CRUX__ResultIU16 target_max_cast = CRUX__cast_iu16_flp2(target_max);
  CRUX__ResultIU16 target_min_cast = CRUX__cast_iu16_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu16_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IU16_MAX;
  const FLP4 target_min = IU16_MIN;
  CRUX__ResultIU16 src_max_cast = CRUX__cast_iu16_flp4(src_max);
  CRUX__ResultIU16 src_min_cast = CRUX__cast_iu16_flp4(src_min);
  CRUX__ResultIU16 src_smallest_cast = CRUX__cast_iu16_flp4(src_smallest);
  CRUX__ResultIU16 truncated_pos_cast = CRUX__cast_iu16_flp4(truncated_pos);
  CRUX__ResultIU16 truncated_neg_cast = CRUX__cast_iu16_flp4(truncated_neg);
  CRUX__ResultIU16 target_max_cast = CRUX__cast_iu16_flp4(target_max);
  CRUX__ResultIU16 target_min_cast = CRUX__cast_iu16_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu32_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = ((FLP1) FLP1_MANTISSA_MAX);
  const FLP1 target_min = ((FLP1) 0.0);
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_flp1(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_flp1(src_min);
  CRUX__ResultIU32 src_smallest_cast = CRUX__cast_iu32_flp1(src_smallest);
  CRUX__ResultIU32 truncated_pos_cast = CRUX__cast_iu32_flp1(truncated_pos);
  CRUX__ResultIU32 truncated_neg_cast = CRUX__cast_iu32_flp1(truncated_neg);
  CRUX__ResultIU32 target_max_cast = CRUX__cast_iu32_flp1(target_max);
  CRUX__ResultIU32 target_min_cast = CRUX__cast_iu32_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu32_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = IU32_MAX;
  const FLP2 target_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_flp2(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_flp2(src_min);
  CRUX__ResultIU32 src_smallest_cast = CRUX__cast_iu32_flp2(src_smallest);
  CRUX__ResultIU32 truncated_pos_cast = CRUX__cast_iu32_flp2(truncated_pos);
  CRUX__ResultIU32 truncated_neg_cast = CRUX__cast_iu32_flp2(truncated_neg);
  CRUX__ResultIU32 target_max_cast = CRUX__cast_iu32_flp2(target_max);
  CRUX__ResultIU32 target_min_cast = CRUX__cast_iu32_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu32_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IU32_MAX;
  const FLP4 target_min = IU32_MIN;
  CRUX__ResultIU32 src_max_cast = CRUX__cast_iu32_flp4(src_max);
  CRUX__ResultIU32 src_min_cast = CRUX__cast_iu32_flp4(src_min);
  CRUX__ResultIU32 src_smallest_cast = CRUX__cast_iu32_flp4(src_smallest);
  CRUX__ResultIU32 truncated_pos_cast = CRUX__cast_iu32_flp4(truncated_pos);
  CRUX__ResultIU32 truncated_neg_cast = CRUX__cast_iu32_flp4(truncated_neg);
  CRUX__ResultIU32 target_max_cast = CRUX__cast_iu32_flp4(target_max);
  CRUX__ResultIU32 target_min_cast = CRUX__cast_iu32_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu64_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = ((FLP1) FLP1_MANTISSA_MAX);
  const FLP1 target_min = ((FLP1) 0.0);
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_flp1(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_flp1(src_min);
  CRUX__ResultIU64 src_smallest_cast = CRUX__cast_iu64_flp1(src_smallest);
  CRUX__ResultIU64 truncated_pos_cast = CRUX__cast_iu64_flp1(truncated_pos);
  CRUX__ResultIU64 truncated_neg_cast = CRUX__cast_iu64_flp1(truncated_neg);
  CRUX__ResultIU64 target_max_cast = CRUX__cast_iu64_flp1(target_max);
  CRUX__ResultIU64 target_min_cast = CRUX__cast_iu64_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu64_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = ((FLP2) FLP2_MANTISSA_MAX);
  const FLP2 target_min = ((FLP2) 0.0);
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_flp2(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_flp2(src_min);
  CRUX__ResultIU64 src_smallest_cast = CRUX__cast_iu64_flp2(src_smallest);
  CRUX__ResultIU64 truncated_pos_cast = CRUX__cast_iu64_flp2(truncated_pos);
  CRUX__ResultIU64 truncated_neg_cast = CRUX__cast_iu64_flp2(truncated_neg);
  CRUX__ResultIU64 target_max_cast = CRUX__cast_iu64_flp2(target_max);
  CRUX__ResultIU64 target_min_cast = CRUX__cast_iu64_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_iu64_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = ((FLP4) FLP4_MANTISSA_MAX);
  const FLP4 target_min = ((FLP4) 0.0);
  CRUX__ResultIU64 src_max_cast = CRUX__cast_iu64_flp4(src_max);
  CRUX__ResultIU64 src_min_cast = CRUX__cast_iu64_flp4(src_min);
  CRUX__ResultIU64 src_smallest_cast = CRUX__cast_iu64_flp4(src_smallest);
  CRUX__ResultIU64 truncated_pos_cast = CRUX__cast_iu64_flp4(truncated_pos);
  CRUX__ResultIU64 truncated_neg_cast = CRUX__cast_iu64_flp4(truncated_neg);
  CRUX__ResultIU64 target_max_cast = CRUX__cast_iu64_flp4(target_max);
  CRUX__ResultIU64 target_min_cast = CRUX__cast_iu64_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is08_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = IS08_MAX;
  const FLP1 target_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_flp1(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_flp1(src_min);
  CRUX__ResultIS08 src_smallest_cast = CRUX__cast_is08_flp1(src_smallest);
  CRUX__ResultIS08 truncated_pos_cast = CRUX__cast_is08_flp1(truncated_pos);
  CRUX__ResultIS08 truncated_neg_cast = CRUX__cast_is08_flp1(truncated_neg);
  CRUX__ResultIS08 target_max_cast = CRUX__cast_is08_flp1(target_max);
  CRUX__ResultIS08 target_min_cast = CRUX__cast_is08_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is08_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = IS08_MAX;
  const FLP2 target_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_flp2(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_flp2(src_min);
  CRUX__ResultIS08 src_smallest_cast = CRUX__cast_is08_flp2(src_smallest);
  CRUX__ResultIS08 truncated_pos_cast = CRUX__cast_is08_flp2(truncated_pos);
  CRUX__ResultIS08 truncated_neg_cast = CRUX__cast_is08_flp2(truncated_neg);
  CRUX__ResultIS08 target_max_cast = CRUX__cast_is08_flp2(target_max);
  CRUX__ResultIS08 target_min_cast = CRUX__cast_is08_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is08_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IS08_MAX;
  const FLP4 target_min = IS08_MIN;
  CRUX__ResultIS08 src_max_cast = CRUX__cast_is08_flp4(src_max);
  CRUX__ResultIS08 src_min_cast = CRUX__cast_is08_flp4(src_min);
  CRUX__ResultIS08 src_smallest_cast = CRUX__cast_is08_flp4(src_smallest);
  CRUX__ResultIS08 truncated_pos_cast = CRUX__cast_is08_flp4(truncated_pos);
  CRUX__ResultIS08 truncated_neg_cast = CRUX__cast_is08_flp4(truncated_neg);
  CRUX__ResultIS08 target_max_cast = CRUX__cast_is08_flp4(target_max);
  CRUX__ResultIS08 target_min_cast = CRUX__cast_is08_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is16_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = IS16_MAX;
  const FLP1 target_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_flp1(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_flp1(src_min);
  CRUX__ResultIS16 src_smallest_cast = CRUX__cast_is16_flp1(src_smallest);
  CRUX__ResultIS16 truncated_pos_cast = CRUX__cast_is16_flp1(truncated_pos);
  CRUX__ResultIS16 truncated_neg_cast = CRUX__cast_is16_flp1(truncated_neg);
  CRUX__ResultIS16 target_max_cast = CRUX__cast_is16_flp1(target_max);
  CRUX__ResultIS16 target_min_cast = CRUX__cast_is16_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is16_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = IS16_MAX;
  const FLP2 target_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_flp2(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_flp2(src_min);
  CRUX__ResultIS16 src_smallest_cast = CRUX__cast_is16_flp2(src_smallest);
  CRUX__ResultIS16 truncated_pos_cast = CRUX__cast_is16_flp2(truncated_pos);
  CRUX__ResultIS16 truncated_neg_cast = CRUX__cast_is16_flp2(truncated_neg);
  CRUX__ResultIS16 target_max_cast = CRUX__cast_is16_flp2(target_max);
  CRUX__ResultIS16 target_min_cast = CRUX__cast_is16_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is16_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IS16_MAX;
  const FLP4 target_min = IS16_MIN;
  CRUX__ResultIS16 src_max_cast = CRUX__cast_is16_flp4(src_max);
  CRUX__ResultIS16 src_min_cast = CRUX__cast_is16_flp4(src_min);
  CRUX__ResultIS16 src_smallest_cast = CRUX__cast_is16_flp4(src_smallest);
  CRUX__ResultIS16 truncated_pos_cast = CRUX__cast_is16_flp4(truncated_pos);
  CRUX__ResultIS16 truncated_neg_cast = CRUX__cast_is16_flp4(truncated_neg);
  CRUX__ResultIS16 target_max_cast = CRUX__cast_is16_flp4(target_max);
  CRUX__ResultIS16 target_min_cast = CRUX__cast_is16_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is32_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = ((FLP1) FLP1_MANTISSA_MAX);
  const FLP1 target_min = -1 * target_max;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_flp1(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_flp1(src_min);
  CRUX__ResultIS32 src_smallest_cast = CRUX__cast_is32_flp1(src_smallest);
  CRUX__ResultIS32 truncated_pos_cast = CRUX__cast_is32_flp1(truncated_pos);
  CRUX__ResultIS32 truncated_neg_cast = CRUX__cast_is32_flp1(truncated_neg);
  CRUX__ResultIS32 target_max_cast = CRUX__cast_is32_flp1(target_max);
  CRUX__ResultIS32 target_min_cast = CRUX__cast_is32_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is32_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = IS32_MAX;
  const FLP2 target_min = IS32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_flp2(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_flp2(src_min);
  CRUX__ResultIS32 src_smallest_cast = CRUX__cast_is32_flp2(src_smallest);
  CRUX__ResultIS32 truncated_pos_cast = CRUX__cast_is32_flp2(truncated_pos);
  CRUX__ResultIS32 truncated_neg_cast = CRUX__cast_is32_flp2(truncated_neg);
  CRUX__ResultIS32 target_max_cast = CRUX__cast_is32_flp2(target_max);
  CRUX__ResultIS32 target_min_cast = CRUX__cast_is32_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is32_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IS32_MAX;
  const FLP4 target_min = IS32_MIN;
  CRUX__ResultIS32 src_max_cast = CRUX__cast_is32_flp4(src_max);
  CRUX__ResultIS32 src_min_cast = CRUX__cast_is32_flp4(src_min);
  CRUX__ResultIS32 src_smallest_cast = CRUX__cast_is32_flp4(src_smallest);
  CRUX__ResultIS32 truncated_pos_cast = CRUX__cast_is32_flp4(truncated_pos);
  CRUX__ResultIS32 truncated_neg_cast = CRUX__cast_is32_flp4(truncated_neg);
  CRUX__ResultIS32 target_max_cast = CRUX__cast_is32_flp4(target_max);
  CRUX__ResultIS32 target_min_cast = CRUX__cast_is32_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is64_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_SMALLEST;
  const FLP1 truncated_pos = FLP_TRUNC(AS_FLP1(1.5));
  const FLP1 truncated_neg = FLP_TRUNC(AS_FLP1(-1.5));
  const FLP1 target_max = ((FLP1) FLP1_MANTISSA_MAX);
  const FLP1 target_min = -1 * target_max;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_flp1(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_flp1(src_min);
  CRUX__ResultIS64 src_smallest_cast = CRUX__cast_is64_flp1(src_smallest);
  CRUX__ResultIS64 truncated_pos_cast = CRUX__cast_is64_flp1(truncated_pos);
  CRUX__ResultIS64 truncated_neg_cast = CRUX__cast_is64_flp1(truncated_neg);
  CRUX__ResultIS64 target_max_cast = CRUX__cast_is64_flp1(target_max);
  CRUX__ResultIS64 target_min_cast = CRUX__cast_is64_flp1(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is64_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 src_smallest = FLP2_SMALLEST;
  const FLP2 truncated_pos = FLP_TRUNC(AS_FLP2(1.5));
  const FLP2 truncated_neg = FLP_TRUNC(AS_FLP2(-1.5));
  const FLP2 target_max = ((FLP2) FLP2_MANTISSA_MAX);
  const FLP2 target_min = -1 * target_max;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_flp2(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_flp2(src_min);
  CRUX__ResultIS64 src_smallest_cast = CRUX__cast_is64_flp2(src_smallest);
  CRUX__ResultIS64 truncated_pos_cast = CRUX__cast_is64_flp2(truncated_pos);
  CRUX__ResultIS64 truncated_neg_cast = CRUX__cast_is64_flp2(truncated_neg);
  CRUX__ResultIS64 target_max_cast = CRUX__cast_is64_flp2(target_max);
  CRUX__ResultIS64 target_min_cast = CRUX__cast_is64_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_is64_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 src_smallest = FLP4_SMALLEST;
  const FLP4 truncated_pos = FLP_TRUNC(AS_FLP4(1.5));
  const FLP4 truncated_neg = FLP_TRUNC(AS_FLP4(-1.5));
  const FLP4 target_max = IS64_MAX;
  const FLP4 target_min = IS64_MIN;
  CRUX__ResultIS64 src_max_cast = CRUX__cast_is64_flp4(src_max);
  CRUX__ResultIS64 src_min_cast = CRUX__cast_is64_flp4(src_min);
  CRUX__ResultIS64 src_smallest_cast = CRUX__cast_is64_flp4(src_smallest);
  CRUX__ResultIS64 truncated_pos_cast = CRUX__cast_is64_flp4(truncated_pos);
  CRUX__ResultIS64 truncated_neg_cast = CRUX__cast_is64_flp4(truncated_neg);
  CRUX__ResultIS64 target_max_cast = CRUX__cast_is64_flp4(target_max);
  CRUX__ResultIS64 target_min_cast = CRUX__cast_is64_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((src_smallest_cast.occ != NULL), "Must have an error.");
  ok((truncated_pos_cast.occ == NULL), "Must not have an error.");
  ok((truncated_neg_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&src_smallest_cast.occ);
  CRUX__occurrences_clean(&truncated_pos_cast.occ);
  CRUX__occurrences_clean(&truncated_neg_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_iu08_test () {
  // 8
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 target_max = IU08_MAX;
  const IU08 target_min = IU08_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_iu08(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_iu08(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_iu08(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_iu08(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_iu16_test () {
  // 8
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 target_max = IU16_MAX;
  const IU16 target_min = IU16_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_iu16(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_iu16(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_iu16(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_iu16(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_iu32_test () {
  // 8
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 target_max = ((IU32) FLP1_MANTISSA_MAX);
  const IU32 target_min = IU32_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_iu32(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_iu32(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_iu32(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_iu32(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_iu64_test () {
  // 8
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 target_max = ((IU64) FLP1_MANTISSA_MAX);
  const IU64 target_min = IU64_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_iu64(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_iu64(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_iu64(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_iu64(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_is08_test () {
  // 8
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 target_max = IS08_MAX;
  const IS08 target_min = IS08_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_is08(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_is08(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_is08(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_is08(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_is16_test () {
  // 8
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 target_max = IS16_MAX;
  const IS16 target_min = IS16_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_is16(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_is16(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_is16(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_is16(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_is32_test () {
  // 8
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 target_max = ((IS32) FLP1_MANTISSA_MAX);
  const IS32 target_min = -1 * target_max;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_is32(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_is32(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_is32(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_is32(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_is64_test () {
  // 8
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 target_max = ((IS64) FLP1_MANTISSA_MAX);
  const IS64 target_min = -1 * target_max;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_is64(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_is64(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_is64(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_is64(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_iu08_test () {
  // 8
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 target_max = IU08_MAX;
  const IU08 target_min = IU08_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_iu08(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_iu08(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_iu08(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_iu08(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_iu16_test () {
  // 8
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 target_max = IU16_MAX;
  const IU16 target_min = IU16_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_iu16(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_iu16(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_iu16(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_iu16(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_iu32_test () {
  // 8
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 target_max = IU32_MAX;
  const IU32 target_min = IU32_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_iu32(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_iu32(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_iu32(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_iu32(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_iu64_test () {
  // 8
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 target_max = ((IU64) FLP2_MANTISSA_MAX);
  const IU64 target_min = IU64_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_iu64(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_iu64(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_iu64(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_iu64(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_is08_test () {
  // 8
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 target_max = IS08_MAX;
  const IS08 target_min = IS08_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_is08(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_is08(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_is08(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_is08(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_is16_test () {
  // 8
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 target_max = IS16_MAX;
  const IS16 target_min = IS16_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_is16(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_is16(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_is16(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_is16(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_is32_test () {
  // 8
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 target_max = IS32_MAX;
  const IS32 target_min = IS32_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_is32(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_is32(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_is32(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_is32(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_is64_test () {
  // 8
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 target_max = ((IS64) FLP2_MANTISSA_MAX);
  const IS64 target_min = -1 * target_max;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_is64(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_is64(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_is64(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_is64(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_iu08_test () {
  // 8
  const IU08 src_max = IU08_MAX;
  const IU08 src_min = IU08_MIN;
  const IU08 target_max = IU08_MAX;
  const IU08 target_min = IU08_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_iu08(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_iu08(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_iu08(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_iu08(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_iu16_test () {
  // 8
  const IU16 src_max = IU16_MAX;
  const IU16 src_min = IU16_MIN;
  const IU16 target_max = IU16_MAX;
  const IU16 target_min = IU16_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_iu16(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_iu16(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_iu16(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_iu16(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_iu32_test () {
  // 8
  const IU32 src_max = IU32_MAX;
  const IU32 src_min = IU32_MIN;
  const IU32 target_max = IU32_MAX;
  const IU32 target_min = IU32_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_iu32(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_iu32(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_iu32(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_iu32(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_iu64_test () {
  // 8
  const IU64 src_max = IU64_MAX;
  const IU64 src_min = IU64_MIN;
  const IU64 target_max = IU64_MAX;
  const IU64 target_min = IU64_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_iu64(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_iu64(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_iu64(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_iu64(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_is08_test () {
  // 8
  const IS08 src_max = IS08_MAX;
  const IS08 src_min = IS08_MIN;
  const IS08 target_max = IS08_MAX;
  const IS08 target_min = IS08_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_is08(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_is08(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_is08(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_is08(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_is16_test () {
  // 8
  const IS16 src_max = IS16_MAX;
  const IS16 src_min = IS16_MIN;
  const IS16 target_max = IS16_MAX;
  const IS16 target_min = IS16_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_is16(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_is16(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_is16(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_is16(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_is32_test () {
  // 8
  const IS32 src_max = IS32_MAX;
  const IS32 src_min = IS32_MIN;
  const IS32 target_max = IS32_MAX;
  const IS32 target_min = IS32_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_is32(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_is32(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_is32(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_is32(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_is64_test () {
  // 8
  const IS64 src_max = IS64_MAX;
  const IS64 src_min = IS64_MIN;
  const IS64 target_max = IS64_MAX;
  const IS64 target_min = IS64_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_is64(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_is64(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_is64(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_is64(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 target_max = FLP1_MAX;
  const FLP2 target_min = FLP1_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_flp2(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_flp2(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_flp2(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_flp2(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp1_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 target_max = FLP1_MAX;
  const FLP4 target_min = FLP1_MIN;
  CRUX__ResultFLP1 src_max_cast = CRUX__cast_flp1_flp4(src_max);
  CRUX__ResultFLP1 src_min_cast = CRUX__cast_flp1_flp4(src_min);
  CRUX__ResultFLP1 target_max_cast = CRUX__cast_flp1_flp4(target_max);
  CRUX__ResultFLP1 target_min_cast = CRUX__cast_flp1_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 target_max = FLP1_MAX;
  const FLP1 target_min = FLP1_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_flp1(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_flp1(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_flp1(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_flp1(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp2_flp4_test () {
  // 8
  const FLP4 src_max = FLP4_MAX;
  const FLP4 src_min = FLP4_MIN;
  const FLP4 target_max = FLP2_MAX;
  const FLP4 target_min = FLP2_MIN;
  CRUX__ResultFLP2 src_max_cast = CRUX__cast_flp2_flp4(src_max);
  CRUX__ResultFLP2 src_min_cast = CRUX__cast_flp2_flp4(src_min);
  CRUX__ResultFLP2 target_max_cast = CRUX__cast_flp2_flp4(target_max);
  CRUX__ResultFLP2 target_min_cast = CRUX__cast_flp2_flp4(target_min);
  ok((src_max_cast.occ != NULL), "Must have an error.");
  ok((src_min_cast.occ != NULL), "Must have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must not have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 target_max = FLP1_MAX;
  const FLP1 target_min = FLP1_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_flp1(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_flp1(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_flp1(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_flp1(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


void CRUX__cast_flp4_flp2_test () {
  // 8
  const FLP2 src_max = FLP2_MAX;
  const FLP2 src_min = FLP2_MIN;
  const FLP2 target_max = FLP2_MAX;
  const FLP2 target_min = FLP2_MIN;
  CRUX__ResultFLP4 src_max_cast = CRUX__cast_flp4_flp2(src_max);
  CRUX__ResultFLP4 src_min_cast = CRUX__cast_flp4_flp2(src_min);
  CRUX__ResultFLP4 target_max_cast = CRUX__cast_flp4_flp2(target_max);
  CRUX__ResultFLP4 target_min_cast = CRUX__cast_flp4_flp2(target_min);
  ok((src_max_cast.occ == NULL), "Must not have an error.");
  ok((src_min_cast.occ == NULL), "Must not have an error.");
  ok((target_max_cast.occ == NULL), "Must not have an error.");
  ok((target_min_cast.occ == NULL), "Must have an error.");
  CRUX__occurrences_clean(&src_max_cast.occ);
  CRUX__occurrences_clean(&src_min_cast.occ);
  CRUX__occurrences_clean(&target_max_cast.occ);
  CRUX__occurrences_clean(&target_min_cast.occ);
}


int main () {
  plan(512);
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
  CRUX__cast_iu08_flp1_test();
  CRUX__cast_iu08_flp2_test();
  CRUX__cast_iu08_flp4_test();
  CRUX__cast_iu16_flp1_test();
  CRUX__cast_iu16_flp2_test();
  CRUX__cast_iu16_flp4_test();
  CRUX__cast_iu32_flp1_test();
  CRUX__cast_iu32_flp2_test();
  CRUX__cast_iu32_flp4_test();
  CRUX__cast_iu64_flp1_test();
  CRUX__cast_iu64_flp2_test();
  CRUX__cast_iu64_flp4_test();
  CRUX__cast_is08_flp1_test();
  CRUX__cast_is08_flp2_test();
  CRUX__cast_is08_flp4_test();
  CRUX__cast_is16_flp1_test();
  CRUX__cast_is16_flp2_test();
  CRUX__cast_is16_flp4_test();
  CRUX__cast_is32_flp1_test();
  CRUX__cast_is32_flp2_test();
  CRUX__cast_is32_flp4_test();
  CRUX__cast_is64_flp1_test();
  CRUX__cast_is64_flp2_test();
  CRUX__cast_is64_flp4_test();
  CRUX__cast_flp1_iu08_test();
  CRUX__cast_flp1_iu16_test();
  CRUX__cast_flp1_iu32_test();
  CRUX__cast_flp1_iu64_test();
  CRUX__cast_flp1_is08_test();
  CRUX__cast_flp1_is16_test();
  CRUX__cast_flp1_is32_test();
  CRUX__cast_flp1_is64_test();
  CRUX__cast_flp2_iu08_test();
  CRUX__cast_flp2_iu16_test();
  CRUX__cast_flp2_iu32_test();
  CRUX__cast_flp2_iu64_test();
  CRUX__cast_flp2_is08_test();
  CRUX__cast_flp2_is16_test();
  CRUX__cast_flp2_is32_test();
  CRUX__cast_flp2_is64_test();
  CRUX__cast_flp4_iu08_test();
  CRUX__cast_flp4_iu16_test();
  CRUX__cast_flp4_iu32_test();
  CRUX__cast_flp4_iu64_test();
  CRUX__cast_flp4_is08_test();
  CRUX__cast_flp4_is16_test();
  CRUX__cast_flp4_is32_test();
  CRUX__cast_flp4_is64_test();
  CRUX__cast_flp1_flp2_test();
  CRUX__cast_flp1_flp4_test();
  CRUX__cast_flp2_flp1_test();
  CRUX__cast_flp2_flp4_test();
  CRUX__cast_flp4_flp1_test();
  CRUX__cast_flp4_flp2_test();
  done_testing();
  return EXIT_SUCCESS;
}
