# Files
EXEC := ugly
SRC  := $(wildcard *.c) 
OBJ  := $(patsubst %.c,%.o,$(SRC))
# Options
CC := gcc
CFLAGS := -O3
# Rules
$(EXEC): ugly.o
ugly.o: ugly.c
# Useful phony targets
.PHONY: clobber clean neat echo
clean: neat 
	$(RM) $(OBJ)
neat:
	$(RM)*~ .*~
echo:
	@echo $(OBJ)
