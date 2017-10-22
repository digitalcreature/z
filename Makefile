CC = gcc

# obj files
Z_OBJ = z.o
CORE_OBJ = z_state.o z_stack.o

# bin files
Z_BIN = bin/z

# all files
OBJ = $(CORE_OBJ) $(Z_OBJ)
BIN = $(Z_BIN)

# CFLAGS += -I include/ -I core/
# CFLAGS += -L lib/

all: $(Z_BIN)
clean:
	rm -rf $(OBJ)
	rm -rf $(BIN)

bin/%:
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c z.h
	$(CC) $(CFLAGS) -c -o $@ $*.c

$(Z_BIN): $(CORE_OBJ) $(Z_OBJ)

z.o:
z_state.o: z_state.h
z_stack.o: z_stack.h z_value.h
