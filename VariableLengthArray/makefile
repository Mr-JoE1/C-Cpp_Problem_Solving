BIN=.

all: $(BIN)/varray1 $(BIN)/varray2

clean:
	rm -rf $(BIN)/varray1
	rm -rf $(BIN)/varray2

$(BIN)/varray1: varray1.c
	gcc -ansi varray1.c -o $(BIN)/varray1 

$(BIN)/varray2: varray2.c
	gcc -ansi varray2.c -o $(BIN)/varray2 
