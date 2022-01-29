BIN=.

all: $(BIN)/allocate1 $(BIN)/allocate2 $(BIN)/allocate3

clean:
	rm -rf $(BIN)/allocate1
	rm -rf $(BIN)/allocate2
	rm -rf $(BIN)/allocate3

$(BIN)/allocate1: allocate1.c
	gcc -ansi allocate1.c -o $(BIN)/allocate1 

$(BIN)/allocate2: allocate2.c
	gcc -ansi allocate2.c -o $(BIN)/allocate2 

$(BIN)/allocate3: allocate3.c
	gcc -ansi allocate3.c -o $(BIN)/allocate3 
