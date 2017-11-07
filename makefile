SHELL		=/bin/sh
CC			=clang
SRC			=src
BIN			=bin
CFLAGS	=-std=c11 -Wall -ffunction-sections -fdata-sections
LFLAGS	=-lm -ltap -ltalloc -Wl,--gc-sections


# Core package
core_package = $(SRC)/core

core_types_module						= $(core_package)/types.c
core_types_object						= $(BIN)/core_types.o
core_types_dependencies			=

core_error_module						= $(core_package)/error.c
core_error_object						= $(BIN)/core_error.o
core_error_dependencies			= core_types $(core_types_dependencies)

core_fault_module						= $(core_package)/fault.c
core_fault_object						= $(BIN)/core_fault.o
core_fault_dependencies			= core_error $(core_error_dependencies)

core_trace_module						= $(core_package)/trace.c
core_trace_object						= $(BIN)/core_trace.o
core_trace_dependencies			= core_fault $(core_fault_dependencies)

core_results_module					= $(core_package)/results.c
core_results_object					= $(BIN)/core_results.o
core_results_dependencies		= core_trace $(core_trace_dependencies)

core_cast_module						= $(core_package)/cast.c
core_cast_object						= $(BIN)/core_cast.o
core_cast_dependencies			= core_results $(core_results_dependencies)

core_memory_module					= $(core_package)/memory.c
core_memory_object					= $(BIN)/core_memory.o
core_memory_dependencies		= core_results $(core_results_dependencies)

core_core_module						= $(core_package)/core.c
core_core_object						= $(BIN)/core_core.o
core_core_dependencies			= core_types $(core_types_dependencies) \
															core_error $(core_error_dependencies) \
															core_fault $(core_fault_dependencies) \
															core_trace $(core_trace_dependencies) \
															core_results $(core_results_dependencies) \
															core_cast $(core_cast_dependencies) \
															core_memory $(core_memory_dependencies)


# Math package
math_package = $(SRC)/math

math_error_module						= $(math_package)/error.c
math_error_object						= $(BIN)/math_error.o
math_error_dependencies			= core_core $(core_core_dependencies)

math_abs_module							= $(math_package)/abs.c
math_abs_object							= $(BIN)/math_abs.o
math_abs_dependencies				= math_error $(math_error_dependencies)

math_add_module							= $(math_package)/add.c
math_add_object							= $(BIN)/math_add.o
math_add_dependencies				= math_error $(math_error_dependencies)


# Macros
compile = $(CC) $(CFLAGS) -c -o $($(1)_object) $($(1)_module)




init-bin:
	mkdir -p $(BIN)

%:
	for step in $(foreach d,$(sort $($@_dependencies)),"$(call compile,$d)"); do \
		echo "$$step" && $$step; \
	done
	$(call compile,$@)

test__%: init-bin
	make $(subst test__,,$@)
	$(CC) $(CFLAGS) -c -o $(BIN)/$(subst test__,,$@)_tests.o \
		tests/$(subst test__,,$@)_tests.c
	$(CC) $(LFLAGS) -o $(BIN)/$(subst test__,,$@)_tests \
		$(BIN)/$(subst test__,,$@)_tests.o \
		$($(subst test__,,$@)_object) \
		$(foreach d,$(sort $(addsuffix _object,$($(subst test__,,$@)_dependencies))),$($d))
	strip -S --strip-unneeded \
		--remove-section=.note.gnu.gold-version \
		--remove-section=.comment \
		--remove-section=.note \
		--remove-section=.note.gnu.build-id \
		--remove-section=.note.ABI-tag \
		$(BIN)/$(subst test__,,$@)_tests
	./$(BIN)/$(subst test__,,$@)_tests

clear:
	rm -r bin/*
