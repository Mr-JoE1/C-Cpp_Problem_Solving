BIN=.

all: $(BIN)/ptrcall $(BIN)/ptrcall2

clean:
	rm -rf $(BIN)/ptrcall
	rm -rf $(BIN)/ptrcall2

$(BIN)/ptrcall: ptrcall.c
	gcc -ansi ptrcall.c -o $(BIN)/ptrcall 

$(BIN)/ptrcall2: ptrcall2.c
	gcc -ansi ptrcall2.c -o $(BIN)/ptrcall2 
