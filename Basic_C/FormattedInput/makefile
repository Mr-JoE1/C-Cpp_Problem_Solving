BIN=.

all: $(BIN)/tokenize

clean:
	rm -rf $(BIN)/tokenize

$(BIN)/tokenize: tokenize.c
	gcc -ansi tokenize.c -o $(BIN)/tokenize 
