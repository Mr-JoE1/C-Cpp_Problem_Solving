BIN=.

all: $(BIN)/showoff1 $(BIN)/showoff2

clean:
	rm -rf $(BIN)/showoff1
	rm -rf $(BIN)/showoff2

$(BIN)/showoff1: showoff1.c
	gcc -ansi showoff1.c -o $(BIN)/showoff1 

$(BIN)/showoff2: showoff2.c
	gcc -ansi showoff2.c -o $(BIN)/showoff2 
