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

core_order_module						= $(core_package)/order.c
core_order_object						= $(BIN)/core_order.o
core_order_dependencies			= core_results $(core_results_dependencies)

core_cast_module						= $(core_package)/cast.c
core_cast_object						= $(BIN)/core_cast.o
core_cast_dependencies			= core_order $(core_order_dependencies)

core_memory_module					= $(core_package)/memory.c
core_memory_object					= $(BIN)/core_memory.o
core_memory_dependencies		= core_order $(core_order_dependencies)

core_core_module						= $(core_package)/core.c
core_core_object						= $(BIN)/core_core.o
core_core_dependencies			= core_types $(core_types_dependencies) \
															core_error $(core_error_dependencies) \
															core_fault $(core_fault_dependencies) \
															core_trace $(core_trace_dependencies) \
															core_results $(core_results_dependencies) \
															core_order $(core_order_dependencies) \
															core_cast $(core_cast_dependencies) \
															core_memory $(core_memory_dependencies)


# Arithmetic package
arithmetic_package = $(SRC)/arithmetic

arithmetic_error_module							= $(arithmetic_package)/error.c
arithmetic_error_object							= $(BIN)/arithmetic_error.o
arithmetic_error_dependencies				= core_core $(core_core_dependencies)

arithmetic_signal_module						= $(arithmetic_package)/signal.c
arithmetic_signal_object						= $(BIN)/arithmetic_signal.o
arithmetic_signal_dependencies			= arithmetic_error $(arithmetic_error_dependencies)

arithmetic_abs_module								= $(arithmetic_package)/abs.c
arithmetic_abs_object								= $(BIN)/arithmetic_abs.o
arithmetic_abs_dependencies					= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_add_module								= $(arithmetic_package)/add.c
arithmetic_add_object								= $(BIN)/arithmetic_add.o
arithmetic_add_dependencies					= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_sub_module								= $(arithmetic_package)/sub.c
arithmetic_sub_object								= $(BIN)/arithmetic_sub.o
arithmetic_sub_dependencies					= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_mul_module								= $(arithmetic_package)/mul.c
arithmetic_mul_object								= $(BIN)/arithmetic_mul.o
arithmetic_mul_dependencies					= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_div_module								= $(arithmetic_package)/div.c
arithmetic_div_object								= $(BIN)/arithmetic_div.o
arithmetic_div_dependencies					= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_mod_module								= $(arithmetic_package)/mod.c
arithmetic_mod_object								= $(BIN)/arithmetic_mod.o
arithmetic_mod_dependencies					= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_modadd_module						= $(arithmetic_package)/modadd.c
arithmetic_modadd_object						= $(BIN)/arithmetic_modadd.o
arithmetic_modadd_dependencies			= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_modsub_module						= $(arithmetic_package)/modsub.c
arithmetic_modsub_object						= $(BIN)/arithmetic_modsub.o
arithmetic_modsub_dependencies			= arithmetic_signal $(arithmetic_signal_dependencies)

arithmetic_arithmetic_module				= $(arithmetic_package)/arithmetic.c
arithmetic_arithmetic_object				= $(BIN)/arithmetic_arithmetic.o
arithmetic_arithmetic_dependencies	= arithmetic_error $(arithmetic_error_dependencies) \
																			arithmetic_signal $(arithmetic_signal_dependencies) \
																			arithmetic_abs $(arithmetic_abs_dependencies) \
																			arithmetic_add $(arithmetic_add_dependencies) \
																			arithmetic_sub $(arithmetic_sub_dependencies) \
																			arithmetic_mul $(arithmetic_mul_dependencies) \
																			arithmetic_div $(arithmetic_div_dependencies)


# Structures package
struct_package = $(SRC)/struct

struct_error_module									= $(struct_package)/error.c
struct_error_object									= $(BIN)/struct_error.o
struct_error_dependencies						= arithmetic_arithmetic $(arithmetic_arithmetic_dependencies)

struct_element_module								= $(struct_package)/element.c
struct_element_object								= $(BIN)/struct_element.o
struct_element_dependencies					= struct_error $(struct_error_dependencies)

struct_indexable_module							= $(struct_package)/indexable.c
struct_indexable_object							= $(BIN)/struct_indexable.o
struct_indexable_dependencies				= struct_element $(struct_element_dependencies)

struct_iterable_module							= $(struct_package)/iterable.c
struct_iterable_object							= $(BIN)/struct_iterable.o
struct_iterable_dependencies				= struct_element $(struct_element_dependencies)

# Sequences subpackage
struct_linear_package = $(struct_package)/linear

struct_linear_error_module					= $(struct_linear_package)/error.c
struct_linear_error_object					= $(BIN)/struct_linear_error.o
struct_linear_error_dependencies		= struct_iterable $(struct_iterable_dependencies)

struct_linear_array_module					= $(struct_linear_package)/array.c
struct_linear_array_object					= $(BIN)/struct_linear_array.o
struct_linear_array_dependencies		= struct_linear_error $(struct_linear_error_dependencies)




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
