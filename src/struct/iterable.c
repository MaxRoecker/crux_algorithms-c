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
