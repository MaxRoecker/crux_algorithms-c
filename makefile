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

core_errors_module					= $(core_package)/errors.c
core_errors_object					= $(BIN)/core_errors.o
core_errors_dependencies		= core_types $(core_types_dependencies)

core_errcodes_module				= $(core_package)/errcodes.c
core_errcodes_object				= $(BIN)/core_errcodes.o
core_errcodes_dependencies	= core_types $(core_types_dependencies)

core_results_module					= $(core_package)/results.c
core_results_object					= $(BIN)/core_results.o
core_results_dependencies		= core_errors $(core_errors_dependencies)

core_cast_module						= $(core_package)/cast.c
core_cast_object						= $(BIN)/core_cast.o
core_cast_dependencies			= core_results $(core_results_dependencies)

core_core_module						= $(core_package)/core.c
core_core_object						= $(BIN)/core_core.o
core_core_dependencies			= core_types $(core_types_dependencies) \
															core_errors $(core_errors_dependencies) \
															core_errcodes $(core_errcodes_dependencies) \
															core_results $(core_results_dependencies) \
															core_cast $(core_cast_dependencies)


# Float package
float_package		= $(SRC)/float

float_types_module				= $(float_package)/types.c
float_types_object				= $(BIN)/float_types.o
float_types_dependencies	= core_types $(core_types_dependencies)

float_results_module				= $(float_package)/results.c
float_results_object				= $(BIN)/float_results.o
float_results_dependencies	= core_results $(core_results_dependencies) \
															float_types $(float_types_dependencies)

float_cast_module					= $(float_package)/cast.c
float_cast_object					= $(BIN)/float_cast.o
float_cast_dependencies		= core_cast $(core_cast_dependencies) \
														float_results $(float_results_dependencies)


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
