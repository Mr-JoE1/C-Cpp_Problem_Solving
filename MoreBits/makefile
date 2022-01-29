BIN=.

all: $(BIN)/compbits \
     $(BIN)/swapbits \
     $(BIN)/leftbits \
     $(BIN)/rightbits \
     $(BIN)/fieldbits

clean:
	rm -rf $(BIN)/compbits
	rm -rf $(BIN)/swapbits
	rm -rf $(BIN)/leftbits
	rm -rf $(BIN)/rightbits
	rm -rf $(BIN)/fieldbits

$(BIN)/compbits: compbits.c
	gcc -ansi compbits.c -o $(BIN)/compbits 

$(BIN)/swapbits: swapbits.c
	gcc -ansi swapbits.c -o $(BIN)/swapbits 

$(BIN)/leftbits: leftbits.c
	gcc -ansi leftbits.c -o $(BIN)/leftbits 

$(BIN)/rightbits: rightbits.c
	gcc -ansi rightbits.c -o $(BIN)/rightbits 

$(BIN)/fieldbits: fieldbits.c
	gcc -ansi fieldbits.c -o $(BIN)/fieldbits 
