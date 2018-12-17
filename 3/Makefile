# Files
EXEC := mighty
SRC  := $(wildcard *.c) 
OBJ  := $(patsubst %.c,%.o,$(SRC))
# Options
CC := gcc
CFLAGS := -O3
# Rules
$(EXEC): mighty.o
mighty.o: mighty.c
# Useful phony targets
.PHONY: clobber clean neat echo
clean: neat 
	$(RM) $(OBJ)
neat:
	$(RM)*~ .*~
echo:
	@echo $(OBJ)
