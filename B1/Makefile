# Files
EXEC := bonus1
SRC  := $(wildcard *.c) 
OBJ  := $(patsubst %.c,%.o,$(SRC))
# Options
CC := gcc
CFLAGS := -O3
# Rules
$(EXEC): bonus1.o -lm
bonus1.o: bonus1.c -lm
# Useful phony targets
.PHONY: clobber clean neat echo
clean: neat 
	$(RM) $(OBJ)
neat:
	$(RM)*~ .*~
echo:
	@echo $(OBJ)
