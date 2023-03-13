CC = gcc
OPT = -std=c99 -O3

BIN_FOLDER := bin

MAIN    =  lab1_ex4.c

all: $(BIN_FOLDER)/lab1_ex4

debug: OPT += -DDEBUG -g
debug: all

$(BIN_FOLDER)/lab1_ex4: $(MAIN)
	@mkdir -p $(BIN_FOLDER)
	$(CC) $^ -o $@ $(OPT)

clean:
	rm -r $(BIN_FOLDER)

