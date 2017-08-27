SHELL		= /bin/sh
CC			= clang
SRC			= src
BIN			= bin
CFLAGS	= -std=c11 -Wall -ffunction-sections -fdata-sections
LFLAGS	= -lm -ltap -ltalloc -Wl,--gc-sections

# Packages
core_package		= $(SRC)/core

# Modules
core_errors_module				= $(core_package)/errors.c
core_errors_object				= $(BIN)/core_errors.o
core_errors_dependencies	= 


init-bin:
	mkdir -p $(BIN)

%:
	make $($@_dependencies)
	$(CC) $(CFLAGS) -c -o $($@_object) $($@_module)

test__%: init-bin
	make $(subst test__,,$@)
	$(CC) $(CFLAGS) -c -o $(BIN)/$(subst test__,,$@)_tests.o \
		tests/$(subst test__,,$@)_tests.c
	$(CC) $(LFLAGS) -o $(BIN)/$(subst test__,,$@)_tests \
		$(BIN)/$(subst test__,,$@)_tests.o \
		$($(subst test__,,$@)_object) \
		$($(addsuffix _object, $($(subst test__,,$@)_dependencies)))
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
