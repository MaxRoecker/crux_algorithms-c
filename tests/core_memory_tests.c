#include <tap.h>
#include "./../src/core/memory.h"


void CRUX__alloc_test () {
  const Size max = SIZE_MAX;
  const Size avg = 255;
  const Size min = SIZE_MIN;
  CRUX__ResultAddr max_result_addr = CRUX__alloc(max);
  CRUX__ResultAddr avg_result_addr = CRUX__alloc(avg);
  CRUX__ResultAddr min_result_addr = CRUX__alloc(min);
  ok(!CRUX__trace_check(max_result_addr.trace), "Must have an error.");
  ok(CRUX__trace_check(avg_result_addr.trace), "Must not have an error.");
  ok(CRUX__trace_check(min_result_addr.trace), "Must not have an error.");

  void *max_addr = (void *) max_result_addr.value;
  void *avg_addr = (void *) avg_result_addr.value;
  void *min_addr = (void *) min_result_addr.value;
  ok((max_addr == nil(void)), "Must be nil.");
  ok((avg_addr != nil(void)), "Must be a valid address.");
  ok((min_addr != nil(void)), "Must be a valid address.");

  CRUX__ResultSize max_size = CRUX__alloc_get_size(max_addr);
  CRUX__ResultSize avg_size = CRUX__alloc_get_size(avg_addr);
  CRUX__ResultSize min_size = CRUX__alloc_get_size(min_addr);
  ok((max_size.value == 0), "Must be zero.");
  ok((avg_size.value == avg), "Must be %zu.", avg);
  ok((min_size.value == 0), "Must be zero.");

  CRUX__ResultVoid nul_free = CRUX__alloc_free(nil(void));
  CRUX__ResultVoid max_free = CRUX__alloc_free(&max_addr);
  CRUX__ResultVoid avg_free = CRUX__alloc_free(&avg_addr);
  CRUX__ResultVoid min_free = CRUX__alloc_free(&min_addr);
  ok(!CRUX__trace_check(nul_free.trace), "Must have an error.");
  ok(!CRUX__trace_check(max_free.trace), "Must have an error.");
  ok(CRUX__trace_check(avg_free.trace), "Must not have an error.");
  ok(CRUX__trace_check(min_free.trace), "Must not have an error.");
  ok((max_addr == nil(void)), "Must be nil.");
  ok((avg_addr == nil(void)), "Must be nil.");
  ok((min_addr == nil(void)), "Must be nil.");
}


void CRUX__alloc_into_tests () {
  Size root_size = 0;
  const Size a_size = 16;
  const Size b_size = 32;
  const Size c_size = 16;
  
  CRUX__ResultAddr root_alloc_result = CRUX__alloc_context();
  ok(CRUX__trace_check(root_alloc_result.trace), "Must not have an error.");
  ok((root_alloc_result.value != nil(void)), "Must not be nil.");

  void *root = (void *) root_alloc_result.value;
  CRUX__ResultAddr a_alloc_result = CRUX__alloc_into(root, a_size);
  CRUX__ResultAddr b_alloc_result = CRUX__alloc_into(nil(void), b_size);
  ok(CRUX__trace_check(a_alloc_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(b_alloc_result.trace), "Must not have an error.");
  ok((a_alloc_result.value != nil(void)), "Must not be nil.");
  ok((b_alloc_result.value != nil(void)), "Must not be nil.");

  void *a = (void *) a_alloc_result.value;
  void *b = (void *) b_alloc_result.value;
  CRUX__ResultAddr c_alloc_result = CRUX__alloc_into(a, c_size);
  ok(CRUX__trace_check(c_alloc_result.trace), "Must not have an error.");
  ok((c_alloc_result.value != nil(void)), "Must not be nil.");

  CRUX__ResultSize root_size_result = CRUX__alloc_get_total_size(root);
  root_size = a_size + c_size;
  ok(CRUX__trace_check(root_size_result.trace), "Must not have an error.");
  ok((root_size_result.value == root_size), "Must be %zu.", root_size);

  CRUX__ResultAddr b_move_result = CRUX__alloc_move(root, &b);
  ok(CRUX__trace_check(b_move_result.trace), "Must not have an error.");
  ok((b_move_result.value != nil(void)), "Must not be nil.");
  ok((b == nil(void)), "Must be nil.");

  b = (void *) b_move_result.value;
  CRUX__ResultSize root_new_size_result = CRUX__alloc_get_total_size(root);
  root_size = a_size + c_size + b_size;
  ok(CRUX__trace_check(root_new_size_result.trace), "Must not have an error.");
  ok((root_new_size_result.value == root_size), "Must be %zu.", root_size);

  CRUX__ResultVoid root_free_result = CRUX__alloc_free(&root);
  ok(CRUX__trace_check(root_free_result.trace), "Must not have an error.");
  ok((root == nil(void)), "Must be nil.");

  CRUX__trace_clean(&root_alloc_result.trace);
  CRUX__trace_clean(&a_alloc_result.trace);
  CRUX__trace_clean(&b_alloc_result.trace);
  CRUX__trace_clean(&c_alloc_result.trace);
  CRUX__trace_clean(&root_size_result.trace);
  CRUX__trace_clean(&b_move_result.trace);
  CRUX__trace_clean(&root_new_size_result.trace);
  CRUX__trace_clean(&root_free_result.trace);
}


int main (int argc, char *argv[]) {
  plan(33);
  CRUX__alloc_test();
  CRUX__alloc_into_tests();
  done_testing();
  return EXIT_SUCCESS;
}
