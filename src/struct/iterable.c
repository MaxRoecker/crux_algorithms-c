#include "./iterable.h"


CRUX__Element CRUX__iterator_next (const CRUX__Iterator iterator) {
  return iterator.get(iterator.settings);
}


Bool CRUX__iterator_has_next (const CRUX__Iterator iterator) {
  return iterator.has_next(iterator.settings);
}

void CRUX__iterator_finalize (CRUX__Iterator *const iterator) {
  iterator->finalize(&(iterator->settings));
  iterator->get = ((CRUX__IterableGetFunction) 0);
  iterator->has_next = ((CRUX__IterableHasNextFunction) 0);
  iterator->finalize = ((CRUX__IterableFinalizeFunction) 0);
  iterator->settings = nil(void);
}


CRUX__Iterator CRUX__iterator_nil (void) {
  const CRUX__Iterator iterator = {
    .settings = nil(void),
    .get = ((CRUX__IterableGetFunction) 0),
    .has_next = ((CRUX__IterableHasNextFunction) 0),
    .finalize = ((CRUX__IterableFinalizeFunction) 0)};
  return iterator;
}


IU16 CRUX__iterator_real_end (
    const IU16 start,
    const IU16 end,
    const IU16 step) {
  IU16 real_end = as_iu16(0); 
  if (CRUX__is_less_equal(start, end)) {
    const IU16 len = end - start;
    CRUX__ResultDivIU16 div_result = CRUX__div(len, step);
    if (!CRUX__trace_check(div_result.trace)) {
      real_end = start;
    } else {
      const CRUX__DivIU16 div = div_result.value;
      real_end = start + ((IU16) div.quo * step);
    }
    CRUX__trace_clean(&div_result.trace);
  } else {
    const IU16 len = start - end;
    CRUX__ResultDivIU16 div_result = CRUX__div(len, step);
    if (!CRUX__trace_check(div_result.trace)) {
      real_end = start;
    } else {
      const CRUX__DivIU16 div = div_result.value;
      real_end = start - ((IU16) div.quo * step);
    }
    CRUX__trace_clean(&div_result.trace);
  }
  return real_end;
}
