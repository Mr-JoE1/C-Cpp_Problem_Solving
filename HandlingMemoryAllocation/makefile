BIN=.

all: $(BIN)/showfree $(BIN)/funcleak $(BIN)/starray $(BIN)/varray

clean:
	rm -rf $(BIN)/showfree
	rm -rf $(BIN)/funcleak
	rm -rf $(BIN)/starray
	rm -rf $(BIN)/varray

$(BIN)/showfree: showfree.c
	gcc -ansi showfree.c -o $(BIN)/showfree 

$(BIN)/funcleak: funcleak.c
	gcc -ansi funcleak.c -o $(BIN)/funcleak 

$(BIN)/starray: starray.c
	gcc -ansi starray.c -o $(BIN)/starray 

$(BIN)/varray: varray.c
	gcc -ansi varray.c -o $(BIN)/varray 
