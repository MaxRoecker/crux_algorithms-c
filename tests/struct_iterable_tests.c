#include <tap.h>
#include "./../src/struct/iterable.h"


void CRUX__iterator_real_end_index_tests (void) {
  const char msg[] = "Must be equal to %"IU16_FMT".";
  const IU16 zero = as_iu16(0);
  const IU16 one = as_iu16(1);
  const IU16 two = as_iu16(2);
  const IU16 three = as_iu16(3);
  const IU16 four = as_iu16(4);
  const IU16 five = as_iu16(5);
  const IU16 six = as_iu16(6);
  const IU16 seven = as_iu16(7);
  const IU16 length = as_iu16(8);
  const IU16 end_a = CRUX__iterator_real_end(zero, seven, one);
  const IU16 end_b = CRUX__iterator_real_end(zero, three, one);
  const IU16 end_c = CRUX__iterator_real_end(four, seven, one);
  const IU16 end_d = CRUX__iterator_real_end(two, five, one);
  ok(CRUX__is_equal(end_a, seven), msg, seven);
  ok(CRUX__is_equal(end_b, three), msg, three);
  ok(CRUX__is_equal(end_c, seven), msg, seven);
  ok(CRUX__is_equal(end_d, five), msg, five);
  const IU16 end_e = CRUX__iterator_real_end(zero, seven, two);
  const IU16 end_f = CRUX__iterator_real_end(zero, three, two);
  const IU16 end_g = CRUX__iterator_real_end(four, seven, two);
  const IU16 end_h = CRUX__iterator_real_end(two, five, two);
  ok(CRUX__is_equal(end_e, six), msg, six);
  ok(CRUX__is_equal(end_f, two), msg, two);
  ok(CRUX__is_equal(end_g, six), msg, six);
  ok(CRUX__is_equal(end_h, four), msg, four);
  const IU16 end_i = CRUX__iterator_real_end(zero, seven, length);
  const IU16 end_j = CRUX__iterator_real_end(zero, three, length);
  const IU16 end_k = CRUX__iterator_real_end(four, seven, length);
  const IU16 end_l = CRUX__iterator_real_end(two, five, length);
  ok(CRUX__is_equal(end_i, zero), msg, zero);
  ok(CRUX__is_equal(end_j, zero), msg, zero);
  ok(CRUX__is_equal(end_k, four), msg, four);
  ok(CRUX__is_equal(end_l, two), msg, two);
  const IU16 end_m = CRUX__iterator_real_end(seven, zero, one);
  const IU16 end_n = CRUX__iterator_real_end(three, zero, one);
  const IU16 end_o = CRUX__iterator_real_end(seven, four, one);
  const IU16 end_p = CRUX__iterator_real_end(five, two, one);
  ok(CRUX__is_equal(end_m, zero), msg, zero);
  ok(CRUX__is_equal(end_n, zero), msg, zero);
  ok(CRUX__is_equal(end_o, four), msg, four);
  ok(CRUX__is_equal(end_p, two), msg, two);
  const IU16 end_q = CRUX__iterator_real_end(seven, zero, two);
  const IU16 end_r = CRUX__iterator_real_end(three, zero, two);
  const IU16 end_s = CRUX__iterator_real_end(seven, four, two);
  const IU16 end_t = CRUX__iterator_real_end(five, two, two);
  ok(CRUX__is_equal(end_q, one), msg, one);
  ok(CRUX__is_equal(end_r, one), msg, one);
  ok(CRUX__is_equal(end_s, five), msg, five);
  ok(CRUX__is_equal(end_t, three), msg, three);
  const IU16 end_u = CRUX__iterator_real_end(seven, zero, length);
  const IU16 end_v = CRUX__iterator_real_end(three, zero, length);
  const IU16 end_w = CRUX__iterator_real_end(seven, four, length);
  const IU16 end_x = CRUX__iterator_real_end(five, two, length);
  ok(CRUX__is_equal(end_u, seven), msg, seven);
  ok(CRUX__is_equal(end_v, three), msg, three);
  ok(CRUX__is_equal(end_w, seven), msg, seven);
  ok(CRUX__is_equal(end_x, five), msg, five);
}


int main(int argc, char const *argv[]) {
  plan(24);
  CRUX__iterator_real_end_index_tests();
  done_testing();
  return EXIT_SUCCESS;
}

