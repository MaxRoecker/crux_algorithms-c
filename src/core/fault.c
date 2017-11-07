#include "./fault.h"


Bool CRUX__fault_equals (const CRUX__Fault one, const CRUX__Fault another) {
  const Bool are_equals = (one.cause == another.cause)
    && (one.line == another.line)
    && (CRUX__error_equals(one.error, another.error))
    && (strcmp(one.filepath, another.filepath) == 0)
    && (strcmp(one.info, another.info) == 0);
  return are_equals;
}
