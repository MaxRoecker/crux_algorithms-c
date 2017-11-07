#include <tap.h>
#include "./../src/core/fault.h"


void CRUX__fault_equals_tests () {
  CRUX__Fault fault_0 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_1 = {
    .cause = &fault_0,
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_2 = {
    .cause = &fault_1,
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__fault_infoprintf(fault_2, "I don't know %s", "anymore information");
  
  ok(CRUX__fault_equals(fault_0, fault_0), "Must be equals.");
  ok(!CRUX__fault_equals(fault_0, fault_1), "Must not be equals.");
  ok(!CRUX__fault_equals(fault_0, fault_2), "Must not be equals.");
  ok(!CRUX__fault_equals(fault_1, fault_0), "Must not be equals.");
  ok(CRUX__fault_equals(fault_1, fault_1), "Must be equals.");
  ok(!CRUX__fault_equals(fault_1, fault_2), "Must not be equals.");
  ok(!CRUX__fault_equals(fault_2, fault_0), "Must not be equals.");
  ok(!CRUX__fault_equals(fault_2, fault_1), "Must not be equals.");
  ok(CRUX__fault_equals(fault_2, fault_2), "Must be equals.");
}


int main () {
  plan(9);
  CRUX__fault_equals_tests();
  done_testing();
  return EXIT_SUCCESS;
}
