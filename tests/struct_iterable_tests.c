#include <tap.h>
#include "./../src/struct/iterable.h"


void CRUX__iterator_real_end_index_tests (void) {
  const char msg[] = "Must be equal to %"IU16_FMT".";
  const IU16 val_0 = as_iu16(0);
  const IU16 val_1 = as_iu16(1);
  const IU16 val_2 = as_iu16(2);
  const IU16 val_3 = as_iu16(3);
  const IU16 val_4 = as_iu16(4);
  const IU16 val_5 = as_iu16(5);
  const IU16 val_6 = as_iu16(6);
  const IU16 val_7 = as_iu16(7);
  const IU16 val_8 = as_iu16(8);
  const IU16 end_a = CRUX__iterator_real_end(val_0, val_7, val_1);
  const IU16 end_b = CRUX__iterator_real_end(val_0, val_3, val_1);
  const IU16 end_c = CRUX__iterator_real_end(val_4, val_7, val_1);
  const IU16 end_d = CRUX__iterator_real_end(val_2, val_5, val_1);
  ok(CRUX__is_equal(end_a, val_7), msg, val_7);
  ok(CRUX__is_equal(end_b, val_3), msg, val_3);
  ok(CRUX__is_equal(end_c, val_7), msg, val_7);
  ok(CRUX__is_equal(end_d, val_5), msg, val_5);
  const IU16 end_e = CRUX__iterator_real_end(val_0, val_7, val_2);
  const IU16 end_f = CRUX__iterator_real_end(val_0, val_3, val_2);
  const IU16 end_g = CRUX__iterator_real_end(val_4, val_7, val_2);
  const IU16 end_h = CRUX__iterator_real_end(val_2, val_5, val_2);
  ok(CRUX__is_equal(end_e, val_6), msg, val_6);
  ok(CRUX__is_equal(end_f, val_2), msg, val_2);
  ok(CRUX__is_equal(end_g, val_6), msg, val_6);
  ok(CRUX__is_equal(end_h, val_4), msg, val_4);
  const IU16 end_i = CRUX__iterator_real_end(val_0, val_7, val_8);
  const IU16 end_j = CRUX__iterator_real_end(val_0, val_3, val_8);
  const IU16 end_k = CRUX__iterator_real_end(val_4, val_7, val_8);
  const IU16 end_l = CRUX__iterator_real_end(val_2, val_5, val_8);
  ok(CRUX__is_equal(end_i, val_0), msg, val_0);
  ok(CRUX__is_equal(end_j, val_0), msg, val_0);
  ok(CRUX__is_equal(end_k, val_4), msg, val_4);
  ok(CRUX__is_equal(end_l, val_2), msg, val_2);
  const IU16 end_m = CRUX__iterator_real_end(val_7, val_0, val_1);
  const IU16 end_n = CRUX__iterator_real_end(val_3, val_0, val_1);
  const IU16 end_o = CRUX__iterator_real_end(val_7, val_4, val_1);
  const IU16 end_p = CRUX__iterator_real_end(val_5, val_2, val_1);
  ok(CRUX__is_equal(end_m, val_0), msg, val_0);
  ok(CRUX__is_equal(end_n, val_0), msg, val_0);
  ok(CRUX__is_equal(end_o, val_4), msg, val_4);
  ok(CRUX__is_equal(end_p, val_2), msg, val_2);
  const IU16 end_q = CRUX__iterator_real_end(val_7, val_0, val_2);
  const IU16 end_r = CRUX__iterator_real_end(val_3, val_0, val_2);
  const IU16 end_s = CRUX__iterator_real_end(val_7, val_4, val_2);
  const IU16 end_t = CRUX__iterator_real_end(val_5, val_2, val_2);
  ok(CRUX__is_equal(end_q, val_1), msg, val_1);
  ok(CRUX__is_equal(end_r, val_1), msg, val_1);
  ok(CRUX__is_equal(end_s, val_5), msg, val_5);
  ok(CRUX__is_equal(end_t, val_3), msg, val_3);
  const IU16 end_u = CRUX__iterator_real_end(val_7, val_0, val_8);
  const IU16 end_v = CRUX__iterator_real_end(val_3, val_0, val_8);
  const IU16 end_w = CRUX__iterator_real_end(val_7, val_4, val_8);
  const IU16 end_x = CRUX__iterator_real_end(val_5, val_2, val_8);
  ok(CRUX__is_equal(end_u, val_7), msg, val_7);
  ok(CRUX__is_equal(end_v, val_3), msg, val_3);
  ok(CRUX__is_equal(end_w, val_7), msg, val_7);
  ok(CRUX__is_equal(end_x, val_5), msg, val_5);
}


int main(int argc, char const *argv[]) {
  plan(24);
  CRUX__iterator_real_end_index_tests();
  dval_1_testing();
  return EXIT_SUCCESS;
}

