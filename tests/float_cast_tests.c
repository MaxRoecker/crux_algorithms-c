#include <string.h>
#include <tap.h>
#include "./../src/float/cast.h"




void CRUX__cast_iu08_flp1_test () {
  // 8
  const FLP1 src_max = FLP1_MAX;
  const FLP1 src_min = FLP1_MIN;
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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
  const FLP1 src_smallest = FLP1_MAGNITUDE_MIN;
  const FLP1 truncated_pos = CRUX__trunc(CRUX__as_flp1(1.5));
  const FLP1 truncated_neg = CRUX__trunc(CRUX__as_flp1(-1.5));
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
  const FLP2 src_smallest = FLP2_MAGNITUDE_MIN;
  const FLP2 truncated_pos = CRUX__trunc(CRUX__as_flp2(1.5));
  const FLP2 truncated_neg = CRUX__trunc(CRUX__as_flp2(-1.5));
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
  const FLP4 src_smallest = FLP4_MAGNITUDE_MIN;
  const FLP4 truncated_pos = CRUX__trunc(CRUX__as_flp4(1.5));
  const FLP4 truncated_neg = CRUX__trunc(CRUX__as_flp4(-1.5));
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


void CRUX__cast_test () {
  const IU08 iu08_value = CRUX__as_iu08(0);
  const IU16 iu16_value = CRUX__as_iu16(0);
  const IU32 iu32_value = CRUX__as_iu32(0);
  const IU64 iu64_value = CRUX__as_iu64(0);
  const IS08 is08_value = CRUX__as_is08(0);
  const IS16 is16_value = CRUX__as_is16(0);
  const IS32 is32_value = CRUX__as_is32(0);
  const IS64 is64_value = CRUX__as_is64(0);
  const FLP1 flp1_value = CRUX__as_flp1(0.0);
  const FLP2 flp2_value = CRUX__as_flp2(0.0);
  const FLP4 flp4_value = CRUX__as_flp4(0.0);
  
  CRUX__ResultIU08 iu16_cast_to_iu08 = CRUX__cast_to_iu08(iu16_value);
  CRUX__ResultIU08 iu32_cast_to_iu08 = CRUX__cast_to_iu08(iu32_value);
  CRUX__ResultIU08 iu64_cast_to_iu08 = CRUX__cast_to_iu08(iu64_value);
  CRUX__ResultIU08 is08_cast_to_iu08 = CRUX__cast_to_iu08(is08_value);
  CRUX__ResultIU08 is16_cast_to_iu08 = CRUX__cast_to_iu08(is16_value);
  CRUX__ResultIU08 is32_cast_to_iu08 = CRUX__cast_to_iu08(is32_value);
  CRUX__ResultIU08 is64_cast_to_iu08 = CRUX__cast_to_iu08(is64_value);
  CRUX__ResultIU08 flp1_cast_to_iu08 = CRUX__cast_to_iu08(flp1_value);
  CRUX__ResultIU08 flp2_cast_to_iu08 = CRUX__cast_to_iu08(flp2_value);
  CRUX__ResultIU08 flp4_cast_to_iu08 = CRUX__cast_to_iu08(flp4_value);

  CRUX__ResultIU16 iu08_cast_to_iu16 = CRUX__cast_to_iu16(iu08_value);
  CRUX__ResultIU16 iu32_cast_to_iu16 = CRUX__cast_to_iu16(iu32_value);
  CRUX__ResultIU16 iu64_cast_to_iu16 = CRUX__cast_to_iu16(iu64_value);
  CRUX__ResultIU16 is08_cast_to_iu16 = CRUX__cast_to_iu16(is08_value);
  CRUX__ResultIU16 is16_cast_to_iu16 = CRUX__cast_to_iu16(is16_value);
  CRUX__ResultIU16 is32_cast_to_iu16 = CRUX__cast_to_iu16(is32_value);
  CRUX__ResultIU16 is64_cast_to_iu16 = CRUX__cast_to_iu16(is64_value);
  CRUX__ResultIU16 flp1_cast_to_iu16 = CRUX__cast_to_iu16(flp1_value);
  CRUX__ResultIU16 flp2_cast_to_iu16 = CRUX__cast_to_iu16(flp2_value);
  CRUX__ResultIU16 flp4_cast_to_iu16 = CRUX__cast_to_iu16(flp4_value);
  
  CRUX__ResultIU32 iu08_cast_to_iu32 = CRUX__cast_to_iu32(iu08_value);
  CRUX__ResultIU32 iu16_cast_to_iu32 = CRUX__cast_to_iu32(iu16_value);
  CRUX__ResultIU32 iu64_cast_to_iu32 = CRUX__cast_to_iu32(iu64_value);
  CRUX__ResultIU32 is08_cast_to_iu32 = CRUX__cast_to_iu32(is08_value);
  CRUX__ResultIU32 is16_cast_to_iu32 = CRUX__cast_to_iu32(is16_value);
  CRUX__ResultIU32 is32_cast_to_iu32 = CRUX__cast_to_iu32(is32_value);
  CRUX__ResultIU32 is64_cast_to_iu32 = CRUX__cast_to_iu32(is64_value);
  CRUX__ResultIU32 flp1_cast_to_iu32 = CRUX__cast_to_iu32(flp1_value);
  CRUX__ResultIU32 flp2_cast_to_iu32 = CRUX__cast_to_iu32(flp2_value);
  CRUX__ResultIU32 flp4_cast_to_iu32 = CRUX__cast_to_iu32(flp4_value);
  
  CRUX__ResultIU64 iu08_cast_to_iu64 = CRUX__cast_to_iu64(iu08_value);
  CRUX__ResultIU64 iu16_cast_to_iu64 = CRUX__cast_to_iu64(iu16_value);
  CRUX__ResultIU64 iu32_cast_to_iu64 = CRUX__cast_to_iu64(iu32_value);
  CRUX__ResultIU64 is08_cast_to_iu64 = CRUX__cast_to_iu64(is08_value);
  CRUX__ResultIU64 is16_cast_to_iu64 = CRUX__cast_to_iu64(is16_value);
  CRUX__ResultIU64 is32_cast_to_iu64 = CRUX__cast_to_iu64(is32_value);
  CRUX__ResultIU64 is64_cast_to_iu64 = CRUX__cast_to_iu64(is64_value);
  CRUX__ResultIU64 flp1_cast_to_iu64 = CRUX__cast_to_iu64(flp1_value);
  CRUX__ResultIU64 flp2_cast_to_iu64 = CRUX__cast_to_iu64(flp2_value);
  CRUX__ResultIU64 flp4_cast_to_iu64 = CRUX__cast_to_iu64(flp4_value);
  
  CRUX__ResultIS08 iu08_cast_to_is08 = CRUX__cast_to_is08(iu08_value);
  CRUX__ResultIS08 iu16_cast_to_is08 = CRUX__cast_to_is08(iu16_value);
  CRUX__ResultIS08 iu32_cast_to_is08 = CRUX__cast_to_is08(iu32_value);
  CRUX__ResultIS08 iu64_cast_to_is08 = CRUX__cast_to_is08(iu64_value);
  CRUX__ResultIS08 is16_cast_to_is08 = CRUX__cast_to_is08(is16_value);
  CRUX__ResultIS08 is32_cast_to_is08 = CRUX__cast_to_is08(is32_value);
  CRUX__ResultIS08 is64_cast_to_is08 = CRUX__cast_to_is08(is64_value);
  CRUX__ResultIS08 flp1_cast_to_is08 = CRUX__cast_to_is08(flp1_value);
  CRUX__ResultIS08 flp2_cast_to_is08 = CRUX__cast_to_is08(flp2_value);
  CRUX__ResultIS08 flp4_cast_to_is08 = CRUX__cast_to_is08(flp4_value);
  
  CRUX__ResultIS16 iu08_cast_to_is16 = CRUX__cast_to_is16(iu08_value);
  CRUX__ResultIS16 iu16_cast_to_is16 = CRUX__cast_to_is16(iu16_value);
  CRUX__ResultIS16 iu32_cast_to_is16 = CRUX__cast_to_is16(iu32_value);
  CRUX__ResultIS16 iu64_cast_to_is16 = CRUX__cast_to_is16(iu64_value);
  CRUX__ResultIS16 is08_cast_to_is16 = CRUX__cast_to_is16(is08_value);
  CRUX__ResultIS16 is32_cast_to_is16 = CRUX__cast_to_is16(is32_value);
  CRUX__ResultIS16 is64_cast_to_is16 = CRUX__cast_to_is16(is64_value);
  CRUX__ResultIS16 flp1_cast_to_is16 = CRUX__cast_to_is16(flp1_value);
  CRUX__ResultIS16 flp2_cast_to_is16 = CRUX__cast_to_is16(flp2_value);
  CRUX__ResultIS16 flp4_cast_to_is16 = CRUX__cast_to_is16(flp4_value);
  
  CRUX__ResultIS32 iu08_cast_to_is32 = CRUX__cast_to_is32(iu08_value);
  CRUX__ResultIS32 iu16_cast_to_is32 = CRUX__cast_to_is32(iu16_value);
  CRUX__ResultIS32 iu32_cast_to_is32 = CRUX__cast_to_is32(iu32_value);
  CRUX__ResultIS32 iu64_cast_to_is32 = CRUX__cast_to_is32(iu64_value);
  CRUX__ResultIS32 is08_cast_to_is32 = CRUX__cast_to_is32(is08_value);
  CRUX__ResultIS32 is16_cast_to_is32 = CRUX__cast_to_is32(is16_value);
  CRUX__ResultIS32 is64_cast_to_is32 = CRUX__cast_to_is32(is64_value);
  CRUX__ResultIS32 flp1_cast_to_is32 = CRUX__cast_to_is32(flp1_value);
  CRUX__ResultIS32 flp2_cast_to_is32 = CRUX__cast_to_is32(flp2_value);
  CRUX__ResultIS32 flp4_cast_to_is32 = CRUX__cast_to_is32(flp4_value);
  
  CRUX__ResultIS64 iu08_cast_to_is64 = CRUX__cast_to_is64(iu08_value);
  CRUX__ResultIS64 iu16_cast_to_is64 = CRUX__cast_to_is64(iu16_value);
  CRUX__ResultIS64 iu32_cast_to_is64 = CRUX__cast_to_is64(iu32_value);
  CRUX__ResultIS64 iu64_cast_to_is64 = CRUX__cast_to_is64(iu64_value);
  CRUX__ResultIS64 is08_cast_to_is64 = CRUX__cast_to_is64(is08_value);
  CRUX__ResultIS64 is16_cast_to_is64 = CRUX__cast_to_is64(is16_value);
  CRUX__ResultIS64 is32_cast_to_is64 = CRUX__cast_to_is64(is32_value);
  CRUX__ResultIS64 flp1_cast_to_is64 = CRUX__cast_to_is64(flp1_value);
  CRUX__ResultIS64 flp2_cast_to_is64 = CRUX__cast_to_is64(flp2_value);
  CRUX__ResultIS64 flp4_cast_to_is64 = CRUX__cast_to_is64(flp4_value);
  
  CRUX__ResultFLP1 iu08_cast_to_flp1 = CRUX__cast_to_flp1(iu08_value);
  CRUX__ResultFLP1 iu16_cast_to_flp1 = CRUX__cast_to_flp1(iu16_value);
  CRUX__ResultFLP1 iu32_cast_to_flp1 = CRUX__cast_to_flp1(iu32_value);
  CRUX__ResultFLP1 iu64_cast_to_flp1 = CRUX__cast_to_flp1(iu64_value);
  CRUX__ResultFLP1 is08_cast_to_flp1 = CRUX__cast_to_flp1(is08_value);
  CRUX__ResultFLP1 is16_cast_to_flp1 = CRUX__cast_to_flp1(is16_value);
  CRUX__ResultFLP1 is32_cast_to_flp1 = CRUX__cast_to_flp1(is32_value);
  CRUX__ResultFLP1 is64_cast_to_flp1 = CRUX__cast_to_flp1(is64_value);
  CRUX__ResultFLP1 flp2_cast_to_flp1 = CRUX__cast_to_flp1(flp2_value);
  CRUX__ResultFLP1 flp4_cast_to_flp1 = CRUX__cast_to_flp1(flp4_value);
  
  CRUX__ResultFLP2 iu08_cast_to_flp2 = CRUX__cast_to_flp2(iu08_value);
  CRUX__ResultFLP2 iu16_cast_to_flp2 = CRUX__cast_to_flp2(iu16_value);
  CRUX__ResultFLP2 iu32_cast_to_flp2 = CRUX__cast_to_flp2(iu32_value);
  CRUX__ResultFLP2 iu64_cast_to_flp2 = CRUX__cast_to_flp2(iu64_value);
  CRUX__ResultFLP2 is08_cast_to_flp2 = CRUX__cast_to_flp2(is08_value);
  CRUX__ResultFLP2 is16_cast_to_flp2 = CRUX__cast_to_flp2(is16_value);
  CRUX__ResultFLP2 is32_cast_to_flp2 = CRUX__cast_to_flp2(is32_value);
  CRUX__ResultFLP2 is64_cast_to_flp2 = CRUX__cast_to_flp2(is64_value);
  CRUX__ResultFLP2 flp1_cast_to_flp2 = CRUX__cast_to_flp2(flp1_value);
  CRUX__ResultFLP2 flp4_cast_to_flp2 = CRUX__cast_to_flp2(flp4_value);
  
  CRUX__ResultFLP4 iu08_cast_to_flp4 = CRUX__cast_to_flp4(iu08_value);
  CRUX__ResultFLP4 iu16_cast_to_flp4 = CRUX__cast_to_flp4(iu16_value);
  CRUX__ResultFLP4 iu32_cast_to_flp4 = CRUX__cast_to_flp4(iu32_value);
  CRUX__ResultFLP4 iu64_cast_to_flp4 = CRUX__cast_to_flp4(iu64_value);
  CRUX__ResultFLP4 is08_cast_to_flp4 = CRUX__cast_to_flp4(is08_value);
  CRUX__ResultFLP4 is16_cast_to_flp4 = CRUX__cast_to_flp4(is16_value);
  CRUX__ResultFLP4 is32_cast_to_flp4 = CRUX__cast_to_flp4(is32_value);
  CRUX__ResultFLP4 is64_cast_to_flp4 = CRUX__cast_to_flp4(is64_value);
  CRUX__ResultFLP4 flp1_cast_to_flp4 = CRUX__cast_to_flp4(flp1_value);
  CRUX__ResultFLP4 flp2_cast_to_flp4 = CRUX__cast_to_flp4(flp2_value);
  
  ok((iu16_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((iu32_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((iu64_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((is08_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((is16_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((is32_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((is64_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((flp1_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((flp2_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((flp4_cast_to_iu08.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_iu08.value == CRUX__as_iu08(0)), "The result must be 0.");
  ok((iu08_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((iu32_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((iu64_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((is08_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((is16_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((is32_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((is64_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((flp1_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((flp2_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((flp4_cast_to_iu16.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_iu16.value == CRUX__as_iu16(0)), "The result must be 0.");
  ok((iu08_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((iu16_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((iu64_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((is08_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((is16_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((is32_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((is64_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((flp1_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((flp2_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((flp4_cast_to_iu32.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_iu32.value == CRUX__as_iu32(0)), "The result must be 0.");
  ok((iu08_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((iu16_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((iu32_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((is08_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((is16_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((is32_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((is64_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((flp1_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((flp2_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((flp4_cast_to_iu64.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_iu64.value == CRUX__as_iu64(0)), "The result must be 0.");
  ok((iu08_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((iu16_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((iu32_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((iu64_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((is16_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((is32_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((is64_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((flp1_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((flp2_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((flp4_cast_to_is08.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_is08.value == CRUX__as_is08(0)), "The result must be 0.");
  ok((iu08_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((iu16_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((iu32_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((iu64_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((is08_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((is32_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((is64_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((flp1_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((flp2_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((flp4_cast_to_is16.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_is16.value == CRUX__as_is16(0)), "The result must be 0.");
  ok((iu08_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((iu16_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((iu32_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((iu64_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((is08_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((is16_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((is64_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((flp1_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((flp2_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((flp4_cast_to_is32.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_is32.value == CRUX__as_is32(0)), "The result must be 0.");
  ok((iu08_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((iu16_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((iu32_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((iu64_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((is08_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((is16_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((is32_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((flp1_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((flp2_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((flp4_cast_to_is64.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_is64.value == CRUX__as_is64(0)), "The result must be 0.");
  ok((iu08_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((iu16_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((iu32_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((iu64_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((is08_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((is16_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((is32_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((is64_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((flp2_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((flp4_cast_to_flp1.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_flp1.value == CRUX__as_flp1(0.0)), "The result must be 0.");
  ok((iu08_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((iu16_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((iu32_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((iu64_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((is08_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((is16_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((is32_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((is64_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((flp1_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((flp4_cast_to_flp2.occ == NULL), "Must not have an error.");
  ok((flp4_cast_to_flp2.value == CRUX__as_flp2(0.0)), "The result must be 0.");
  ok((iu08_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((iu08_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((iu16_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((iu16_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((iu32_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((iu32_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((iu64_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((iu64_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((is08_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((is08_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((is16_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((is16_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((is32_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((is32_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((is64_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((is64_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((flp1_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((flp1_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");
  ok((flp2_cast_to_flp4.occ == NULL), "Must not have an error.");
  ok((flp2_cast_to_flp4.value == CRUX__as_flp4(0.0)), "The result must be 0.");

  CRUX__occurrences_clean(&iu16_cast_to_iu08.occ);
  CRUX__occurrences_clean(&iu32_cast_to_iu08.occ);
  CRUX__occurrences_clean(&iu64_cast_to_iu08.occ);
  CRUX__occurrences_clean(&is08_cast_to_iu08.occ);
  CRUX__occurrences_clean(&is16_cast_to_iu08.occ);
  CRUX__occurrences_clean(&is32_cast_to_iu08.occ);
  CRUX__occurrences_clean(&is64_cast_to_iu08.occ);
  CRUX__occurrences_clean(&flp1_cast_to_iu08.occ);
  CRUX__occurrences_clean(&flp2_cast_to_iu08.occ);
  CRUX__occurrences_clean(&flp4_cast_to_iu08.occ);
  CRUX__occurrences_clean(&iu08_cast_to_iu16.occ);
  CRUX__occurrences_clean(&iu32_cast_to_iu16.occ);
  CRUX__occurrences_clean(&iu64_cast_to_iu16.occ);
  CRUX__occurrences_clean(&is08_cast_to_iu16.occ);
  CRUX__occurrences_clean(&is16_cast_to_iu16.occ);
  CRUX__occurrences_clean(&is32_cast_to_iu16.occ);
  CRUX__occurrences_clean(&is64_cast_to_iu16.occ);
  CRUX__occurrences_clean(&flp1_cast_to_iu16.occ);
  CRUX__occurrences_clean(&flp2_cast_to_iu16.occ);
  CRUX__occurrences_clean(&flp4_cast_to_iu16.occ);
  CRUX__occurrences_clean(&iu08_cast_to_iu32.occ);
  CRUX__occurrences_clean(&iu16_cast_to_iu32.occ);
  CRUX__occurrences_clean(&iu64_cast_to_iu32.occ);
  CRUX__occurrences_clean(&is08_cast_to_iu32.occ);
  CRUX__occurrences_clean(&is16_cast_to_iu32.occ);
  CRUX__occurrences_clean(&is32_cast_to_iu32.occ);
  CRUX__occurrences_clean(&is64_cast_to_iu32.occ);
  CRUX__occurrences_clean(&flp1_cast_to_iu32.occ);
  CRUX__occurrences_clean(&flp2_cast_to_iu32.occ);
  CRUX__occurrences_clean(&flp4_cast_to_iu32.occ);
  CRUX__occurrences_clean(&iu08_cast_to_iu64.occ);
  CRUX__occurrences_clean(&iu16_cast_to_iu64.occ);
  CRUX__occurrences_clean(&iu32_cast_to_iu64.occ);
  CRUX__occurrences_clean(&is08_cast_to_iu64.occ);
  CRUX__occurrences_clean(&is16_cast_to_iu64.occ);
  CRUX__occurrences_clean(&is32_cast_to_iu64.occ);
  CRUX__occurrences_clean(&is64_cast_to_iu64.occ);
  CRUX__occurrences_clean(&flp1_cast_to_iu64.occ);
  CRUX__occurrences_clean(&flp2_cast_to_iu64.occ);
  CRUX__occurrences_clean(&flp4_cast_to_iu64.occ);
  CRUX__occurrences_clean(&iu08_cast_to_is08.occ);
  CRUX__occurrences_clean(&iu16_cast_to_is08.occ);
  CRUX__occurrences_clean(&iu32_cast_to_is08.occ);
  CRUX__occurrences_clean(&iu64_cast_to_is08.occ);
  CRUX__occurrences_clean(&is16_cast_to_is08.occ);
  CRUX__occurrences_clean(&is32_cast_to_is08.occ);
  CRUX__occurrences_clean(&is64_cast_to_is08.occ);
  CRUX__occurrences_clean(&flp1_cast_to_is08.occ);
  CRUX__occurrences_clean(&flp2_cast_to_is08.occ);
  CRUX__occurrences_clean(&flp4_cast_to_is08.occ);
  CRUX__occurrences_clean(&iu08_cast_to_is16.occ);
  CRUX__occurrences_clean(&iu16_cast_to_is16.occ);
  CRUX__occurrences_clean(&iu32_cast_to_is16.occ);
  CRUX__occurrences_clean(&iu64_cast_to_is16.occ);
  CRUX__occurrences_clean(&is08_cast_to_is16.occ);
  CRUX__occurrences_clean(&is32_cast_to_is16.occ);
  CRUX__occurrences_clean(&is64_cast_to_is16.occ);
  CRUX__occurrences_clean(&flp1_cast_to_is16.occ);
  CRUX__occurrences_clean(&flp2_cast_to_is16.occ);
  CRUX__occurrences_clean(&flp4_cast_to_is16.occ);
  CRUX__occurrences_clean(&iu08_cast_to_is32.occ);
  CRUX__occurrences_clean(&iu16_cast_to_is32.occ);
  CRUX__occurrences_clean(&iu32_cast_to_is32.occ);
  CRUX__occurrences_clean(&iu64_cast_to_is32.occ);
  CRUX__occurrences_clean(&is08_cast_to_is32.occ);
  CRUX__occurrences_clean(&is16_cast_to_is32.occ);
  CRUX__occurrences_clean(&is64_cast_to_is32.occ);
  CRUX__occurrences_clean(&flp1_cast_to_is32.occ);
  CRUX__occurrences_clean(&flp2_cast_to_is32.occ);
  CRUX__occurrences_clean(&flp4_cast_to_is32.occ);
  CRUX__occurrences_clean(&iu08_cast_to_is64.occ);
  CRUX__occurrences_clean(&iu16_cast_to_is64.occ);
  CRUX__occurrences_clean(&iu32_cast_to_is64.occ);
  CRUX__occurrences_clean(&iu64_cast_to_is64.occ);
  CRUX__occurrences_clean(&is08_cast_to_is64.occ);
  CRUX__occurrences_clean(&is16_cast_to_is64.occ);
  CRUX__occurrences_clean(&is32_cast_to_is64.occ);
  CRUX__occurrences_clean(&flp1_cast_to_is64.occ);
  CRUX__occurrences_clean(&flp2_cast_to_is64.occ);
  CRUX__occurrences_clean(&flp4_cast_to_is64.occ);
  CRUX__occurrences_clean(&iu08_cast_to_flp1.occ);
  CRUX__occurrences_clean(&iu16_cast_to_flp1.occ);
  CRUX__occurrences_clean(&iu32_cast_to_flp1.occ);
  CRUX__occurrences_clean(&iu64_cast_to_flp1.occ);
  CRUX__occurrences_clean(&is08_cast_to_flp1.occ);
  CRUX__occurrences_clean(&is16_cast_to_flp1.occ);
  CRUX__occurrences_clean(&is32_cast_to_flp1.occ);
  CRUX__occurrences_clean(&is64_cast_to_flp1.occ);
  CRUX__occurrences_clean(&flp2_cast_to_flp1.occ);
  CRUX__occurrences_clean(&flp4_cast_to_flp1.occ);
  CRUX__occurrences_clean(&iu08_cast_to_flp2.occ);
  CRUX__occurrences_clean(&iu16_cast_to_flp2.occ);
  CRUX__occurrences_clean(&iu32_cast_to_flp2.occ);
  CRUX__occurrences_clean(&iu64_cast_to_flp2.occ);
  CRUX__occurrences_clean(&is08_cast_to_flp2.occ);
  CRUX__occurrences_clean(&is16_cast_to_flp2.occ);
  CRUX__occurrences_clean(&is32_cast_to_flp2.occ);
  CRUX__occurrences_clean(&is64_cast_to_flp2.occ);
  CRUX__occurrences_clean(&flp1_cast_to_flp2.occ);
  CRUX__occurrences_clean(&flp4_cast_to_flp2.occ);
  CRUX__occurrences_clean(&iu08_cast_to_flp4.occ);
  CRUX__occurrences_clean(&iu16_cast_to_flp4.occ);
  CRUX__occurrences_clean(&iu32_cast_to_flp4.occ);
  CRUX__occurrences_clean(&iu64_cast_to_flp4.occ);
  CRUX__occurrences_clean(&is08_cast_to_flp4.occ);
  CRUX__occurrences_clean(&is16_cast_to_flp4.occ);
  CRUX__occurrences_clean(&is32_cast_to_flp4.occ);
  CRUX__occurrences_clean(&is64_cast_to_flp4.occ);
  CRUX__occurrences_clean(&flp1_cast_to_flp4.occ);
  CRUX__occurrences_clean(&flp2_cast_to_flp4.occ);
}


int main () {
  plan(508);
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
  CRUX__cast_test();
  done_testing();
  return EXIT_SUCCESS;
}
