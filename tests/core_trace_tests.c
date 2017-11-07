#include <tap.h>
#include "./../src/core/trace.h"


void CRUX__trace_push_clean_tests () {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Fault fault_0 = {
    .cause = ((CRUX__Fault *) 0),
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_1 = {
    .cause = ((CRUX__Fault *) 0),
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_2 = {
    .cause = ((CRUX__Fault *) 0),
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__fault_infoprintf(fault_2, "I don't know %s", "anymore information");
  
  trace = CRUX__trace_push(trace, fault_0);
  trace = CRUX__trace_push(trace, fault_1);
  trace = CRUX__trace_push(trace, fault_2);

  ok(CRUX__error_equals(fault_2.error, trace.top->error), "Must be equals.");
  ok(CRUX__error_equals(fault_1.error, trace.top->cause->error), "Must be equals.");
  ok(CRUX__error_equals(fault_0.error, trace.top->cause->cause->error), "Must be equals.");

  CRUX__trace_clean(&trace);
  ok((trace.context == ((void *) 0)), "Must be NULL");
  ok((trace.top == ((CRUX__Fault *) 0)), "Must be NULL");
}


void CRUX__trace_print_tests () {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Fault fault_0 = {
    .cause = ((CRUX__Fault *) 0),
    .error = CRUX__ERROR_GENERIC,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_1 = {
    .cause = ((CRUX__Fault *) 0),
    .error = CRUX__ERROR_VALUE,
    .info = "I don't know anymore information",
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__Fault fault_2 = {
    .cause = ((CRUX__Fault *) 0),
    .error = CRUX__ERROR_MEMORY,
    .filepath = __FILE__,
    .line = __LINE__};
  CRUX__fault_infoprintf(fault_2, "I don't know %s", "anymore information");
  
  trace = CRUX__trace_push(trace, fault_0);
  trace = CRUX__trace_push(trace, fault_1);
  trace = CRUX__trace_push(trace, fault_2);

  CRUX__trace_print(stdout, trace);
  
  CRUX__trace_clean(&trace);
}


int main () {
  plan(5);
  CRUX__trace_push_clean_tests();
  CRUX__trace_print_tests();
  done_testing();
  return EXIT_SUCCESS;
}
