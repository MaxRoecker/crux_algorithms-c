#include <tap.h>
#include "./../src/struct/linear/array.h"




void CRUX__array_create_tests (void) {
  const IU16 len_nil = as_iu16(0);
  const IU16 len_val = as_iu16(32);
  const IU16 len_max = IU16_MAX;
  const Size elemsize_nil = as_size(0);
  const Size elemsize_val = sizeof(IU08);
  const Size elemsize_max = SIZE_MAX;
  CRUX__ResultArray nil_nil_result = CRUX__array_create(len_nil, elemsize_nil);
  CRUX__ResultArray nil_val_result = CRUX__array_create(len_nil, elemsize_val);
  CRUX__ResultArray nil_max_result = CRUX__array_create(len_nil, elemsize_max);
  CRUX__ResultArray val_nil_result = CRUX__array_create(len_val, elemsize_nil);
  CRUX__ResultArray val_val_result = CRUX__array_create(len_val, elemsize_val);
  CRUX__ResultArray val_max_result = CRUX__array_create(len_val, elemsize_max);
  CRUX__ResultArray max_nil_result = CRUX__array_create(len_max, elemsize_nil);
  CRUX__ResultArray max_val_result = CRUX__array_create(len_max, elemsize_val);
  CRUX__ResultArray max_max_result = CRUX__array_create(len_max, elemsize_max);
  ok(CRUX__trace_check(nil_nil_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(nil_val_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(nil_max_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(val_nil_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(val_val_result.trace), "Must not have an error.");
  ok(!CRUX__trace_check(val_max_result.trace), "Must have an error.");
  ok(CRUX__trace_check(max_nil_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(max_val_result.trace), "Must not have an error.");
  ok(!CRUX__trace_check(max_max_result.trace), "Must have an error.");
  CRUX__Array nil_nil = nil_nil_result.value;
  CRUX__Array nil_val = nil_val_result.value;
  CRUX__Array nil_max = nil_max_result.value;
  CRUX__Array val_nil = val_nil_result.value;
  CRUX__Array val_val = val_val_result.value;
  CRUX__Array max_nil = max_nil_result.value;
  CRUX__Array max_val = max_val_result.value;
  CRUX__ResultSize nil_nil_size_result = CRUX__alloc_get_size(nil_nil.addr);
  CRUX__ResultSize nil_val_size_result = CRUX__alloc_get_size(nil_val.addr);
  CRUX__ResultSize nil_max_size_result = CRUX__alloc_get_size(nil_max.addr);
  CRUX__ResultSize val_nil_size_result = CRUX__alloc_get_size(val_nil.addr);
  CRUX__ResultSize val_val_size_result = CRUX__alloc_get_size(val_val.addr);
  CRUX__ResultSize max_nil_size_result = CRUX__alloc_get_size(max_nil.addr);
  CRUX__ResultSize max_val_size_result = CRUX__alloc_get_size(max_val.addr);
  const Size nil_nil_size = as_size(0);
  const Size nil_val_size = as_size(0);
  const Size nil_max_size = as_size(0);
  const Size val_nil_size = as_size(0);
  const Size val_val_size = as_size(32);
  const Size max_nil_size = as_size(0);
  const Size max_val_size = (Size) IU16_MAX;
  ok(nil_nil_size_result.value == nil_nil_size, "Must be equal to %"SIZE_FMT".", nil_nil_size);
  ok(nil_val_size_result.value == nil_val_size, "Must be equal to %"SIZE_FMT".", nil_val_size);
  ok(nil_max_size_result.value == nil_max_size, "Must be equal to %"SIZE_FMT".", nil_max_size);
  ok(val_nil_size_result.value == val_nil_size, "Must be equal to %"SIZE_FMT".", val_nil_size);
  ok(val_val_size_result.value == val_val_size, "Must be equal to %"SIZE_FMT".", val_val_size);
  ok(max_nil_size_result.value == max_nil_size, "Must be equal to %"SIZE_FMT".", max_nil_size);
  ok(max_val_size_result.value == max_val_size, "Must be equal to %"SIZE_FMT".", max_val_size);
  CRUX__array_clean(&nil_nil);
  CRUX__array_clean(&nil_val);
  CRUX__array_clean(&nil_max);
  CRUX__array_clean(&val_nil);
  CRUX__array_clean(&val_val);
  CRUX__array_clean(&max_nil);
  CRUX__array_clean(&max_val);
  ok(is_nil(nil_nil.addr, void), "Must be nil after cleaning.");
  ok(is_nil(nil_val.addr, void), "Must be nil after cleaning.");
  ok(is_nil(nil_max.addr, void), "Must be nil after cleaning.");
  ok(is_nil(val_nil.addr, void), "Must be nil after cleaning.");
  ok(is_nil(val_val.addr, void), "Must be nil after cleaning.");
  ok(is_nil(max_nil.addr, void), "Must be nil after cleaning.");
  ok(is_nil(max_val.addr, void), "Must be nil after cleaning.");
  CRUX__trace_clean(&nil_nil_result.trace);
  CRUX__trace_clean(&nil_val_result.trace);
  CRUX__trace_clean(&nil_max_result.trace);
  CRUX__trace_clean(&val_nil_result.trace);
  CRUX__trace_clean(&val_val_result.trace);
  CRUX__trace_clean(&val_max_result.trace);
  CRUX__trace_clean(&max_nil_result.trace);
  CRUX__trace_clean(&max_val_result.trace);
  CRUX__trace_clean(&max_max_result.trace);
  CRUX__trace_clean(&nil_nil_size_result.trace);
  CRUX__trace_clean(&nil_val_size_result.trace);
  CRUX__trace_clean(&nil_max_size_result.trace);
  CRUX__trace_clean(&val_nil_size_result.trace);
  CRUX__trace_clean(&val_val_size_result.trace);
  CRUX__trace_clean(&max_nil_size_result.trace);
  CRUX__trace_clean(&max_val_size_result.trace);
}


void CRUX__array_get_put_tests () {
  const IS32 val_0 = as_is32(IS08_MIN);
  const IS32 val_1 = as_is32(IS08_MAX);
  const IS32 val_2 = as_is32(IS16_MIN);
  const IS32 val_3 = as_is32(IU16_MAX);
  const IS32 val_4 = as_is32(IS32_MAX);
  CRUX__ResultArray array_result = CRUX__array_create(5, sizeof(IS32));
  CRUX__Array array = array_result.value;
  CRUX__ResultElement put_0_result = CRUX__array_put(array, 0, (void *) &val_0);
  CRUX__ResultElement put_1_result = CRUX__array_put(array, 1, (void *) &val_1);
  CRUX__ResultElement put_2_result = CRUX__array_put(array, 2, (void *) &val_2);
  CRUX__ResultElement put_3_result = CRUX__array_put(array, 3, (void *) &val_3);
  CRUX__ResultElement put_4_result = CRUX__array_put(array, 4, (void *) &val_4);
  CRUX__ResultElement put_5_result = CRUX__array_put(array, 5, (void *) &val_4);
  ok(CRUX__trace_check(put_0_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(put_1_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(put_2_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(put_3_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(put_4_result.trace), "Must not have an error.");
  ok(!CRUX__trace_check(put_5_result.trace), "Must have an error.");
  CRUX__ResultElement get_0_result = CRUX__array_get(array, 0);
  CRUX__ResultElement get_1_result = CRUX__array_get(array, 1);
  CRUX__ResultElement get_2_result = CRUX__array_get(array, 2);
  CRUX__ResultElement get_3_result = CRUX__array_get(array, 3);
  CRUX__ResultElement get_4_result = CRUX__array_get(array, 4);
  CRUX__ResultElement get_5_result = CRUX__array_get(array, 5);
  ok(CRUX__trace_check(get_0_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(get_1_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(get_2_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(get_3_result.trace), "Must not have an error.");
  ok(CRUX__trace_check(get_4_result.trace), "Must not have an error.");
  ok(!CRUX__trace_check(get_5_result.trace), "Must have an error.");
  ok(CRUX__element_equals(put_0_result.value, get_0_result.value), "Must be equals.");
  ok(CRUX__element_equals(put_1_result.value, get_1_result.value), "Must be equals.");
  ok(CRUX__element_equals(put_2_result.value, get_2_result.value), "Must be equals.");
  ok(CRUX__element_equals(put_3_result.value, get_3_result.value), "Must be equals.");
  ok(CRUX__element_equals(put_4_result.value, get_4_result.value), "Must be equals.");
  const IS32 *const elem_0 = (const IS32 *) get_0_result.value.addr;
  const IS32 *const elem_1 = (const IS32 *) get_1_result.value.addr;
  const IS32 *const elem_2 = (const IS32 *) get_2_result.value.addr;
  const IS32 *const elem_3 = (const IS32 *) get_3_result.value.addr;
  const IS32 *const elem_4 = (const IS32 *) get_4_result.value.addr;
  ok(CRUX__is_equal(*elem_0, val_0), "Must be equal to %"IS32_FMT".", val_0);
  ok(CRUX__is_equal(*elem_1, val_1), "Must be equal to %"IS32_FMT".", val_1);
  ok(CRUX__is_equal(*elem_2, val_2), "Must be equal to %"IS32_FMT".", val_2);
  ok(CRUX__is_equal(*elem_3, val_3), "Must be equal to %"IS32_FMT".", val_3);
  ok(CRUX__is_equal(*elem_4, val_4), "Must be equal to %"IS32_FMT".", val_4);
  CRUX__array_clean(&array);
  CRUX__trace_clean(&put_0_result.trace);
  CRUX__trace_clean(&put_1_result.trace);
  CRUX__trace_clean(&put_2_result.trace);
  CRUX__trace_clean(&put_3_result.trace);
  CRUX__trace_clean(&put_4_result.trace);
  CRUX__trace_clean(&put_5_result.trace);
  CRUX__trace_clean(&get_0_result.trace);
  CRUX__trace_clean(&get_1_result.trace);
  CRUX__trace_clean(&get_2_result.trace);
  CRUX__trace_clean(&get_3_result.trace);
  CRUX__trace_clean(&get_4_result.trace);
  CRUX__trace_clean(&get_5_result.trace);
}


void CRUX__array_iterator_tests () {
  const IU16 len = as_iu16(8);
  const Size elem_size = sizeof(IS32);
  CRUX__ResultArray array_result = CRUX__array_create(len, elem_size);
  CRUX__trace_clean(&array_result.trace);
  CRUX__Array array = array_result.value;
  CRUX__ResultIterator put_iterator_result = CRUX__array_iterator_create(array);
  ok(CRUX__trace_check(put_iterator_result.trace), "Must not have an error.");
  CRUX__Iterator put_iterator = put_iterator_result.value;
  IS32 put_counter = as_is32(0);
  while (CRUX__iterator_has_next(put_iterator)) {
    CRUX__Element array_element = CRUX__iterator_next(put_iterator);
    IS32 *elem_value = (IS32 *) array_element.addr;
    ok(!is_nil(elem_value, IS32), "Must not be nil.");
    *elem_value = ((put_counter % 2) == 0) ? put_counter : (-1 * put_counter);
    put_counter += 1;
  }
  CRUX__ResultIterator get_iterator_result = CRUX__array_iterator_create(array);
  ok(CRUX__trace_check(get_iterator_result.trace), "Must not have an error.");
  CRUX__Iterator get_iterator = get_iterator_result.value;
  IS32 get_counter = as_is32(0);
  while (CRUX__iterator_has_next(get_iterator)) {
    CRUX__Element array_element = CRUX__iterator_next(get_iterator);
    IS32 *elem_value = (IS32 *) array_element.addr;
    IS32 value = ((get_counter % 2) == 0) ? get_counter : (-1 * get_counter);
    ok(CRUX__is_equal(*elem_value, value), "Must be equal to %"IS32_FMT".", value);
    get_counter += 1;
  }
  CRUX__trace_clean(&put_iterator_result.trace);
  CRUX__trace_clean(&get_iterator_result.trace);
  CRUX__iterator_finalize(&put_iterator);  
  CRUX__iterator_finalize(&get_iterator);
  ok(is_nil(put_iterator.state, void), "Must be nil.");
  ok(is_nil(get_iterator.state, void), "Must be nil.");
}




int main (int argc, char *argv[]) {
  plan(65);
  CRUX__array_create_tests();
  CRUX__array_get_put_tests();
  CRUX__array_iterator_tests();
  done_testing();
  return EXIT_SUCCESS;
}
