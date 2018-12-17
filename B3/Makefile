# Files
EXEC := bonus3
SRC  := $(wildcard *.c) 
OBJ  := $(patsubst %.c,%.o,$(SRC))
# Options
CC := gcc
CFLAGS := -O3
# Rules
$(EXEC): bonus3.o -lm
bonus3.o: bonus3.c -lm
# Useful phony targets
.PHONY: clobber clean neat echo
clean: neat 
	$(RM) $(OBJ)
neat:
	$(RM)*~ .*~
echo:
	@echo $(OBJ)
