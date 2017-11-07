#include <tap.h>
#include "./../src/core/trace.h"


void CRUX__trace_push_move_clean_tests () {
  CRUX__Fault fault_0 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_1 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_2 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Trace trace_0 = CRUX__trace_create();
  CRUX__Trace trace_1 = CRUX__trace_create();
 
  CRUX__fault_infoprintf(fault_2, "I don't know %s", "anymore information");
  
  CRUX__trace_push(&trace_0, fault_0);
  CRUX__trace_push(&trace_0, fault_1);
  ok(!CRUX__fault_equals(fault_1, *trace_0.top), "Must not be equals.");
  ok(CRUX__fault_equals(fault_0, *trace_0.top->cause), "Must be equals.");
  ok((trace_0.top->cause->cause == nil(CRUX__Fault)), "Must be nil.");

  CRUX__trace_move(&trace_1, &trace_0);
  ok(!CRUX__fault_equals(fault_1, *trace_1.top), "Must not be equals.");
  ok(CRUX__fault_equals(fault_0, *trace_1.top->cause), "Must be equals.");
  ok((trace_1.top->cause->cause == nil(CRUX__Fault)), "Must be nil.");
  ok((trace_0.context == nil(void)), "Must be nil.");
  ok((trace_0.top == nil(CRUX__Fault)), "Must be nil.");

  CRUX__trace_push(&trace_1, fault_2);
  ok(!CRUX__fault_equals(fault_2, *(trace_1.top)), "Must not be equals.");
  ok(!CRUX__fault_equals(fault_1, *(trace_1.top->cause)), "Must not be equals.");
  ok(CRUX__fault_equals(fault_0, *(trace_1.top->cause->cause)), "Must be equals.");
  ok((trace_1.top->cause->cause->cause == nil(CRUX__Fault)), "Must be nil.");

  CRUX__trace_clean(&trace_1);
  ok((trace_1.context == nil(void)), "Must be nil.");
  ok((trace_1.top == nil(CRUX__Fault)), "Must be nil.");
}


void CRUX__trace_print_tests () {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Fault fault_0 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_1 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_2 = {
    .cause = nil(CRUX__Fault),
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__fault_infoprintf(fault_2, "I don't know %s", "anymore information");
  CRUX__trace_push(&trace, fault_0);
  CRUX__trace_push(&trace, fault_1);
  CRUX__trace_push(&trace, fault_2);
  CRUX__trace_print(stdout, trace);
  CRUX__trace_clean(&trace);
}


int main () {
  plan(14);
  CRUX__trace_push_move_clean_tests();
  CRUX__trace_print_tests();
  done_testing();
  return EXIT_SUCCESS;
}
