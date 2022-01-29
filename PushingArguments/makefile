BIN=.

all: $(BIN)/passvalue $(BIN)/passreference $(BIN)/arglist

clean:
	rm -rf $(BIN)/passvalue
	rm -rf $(BIN)/passreference
	rm -rf $(BIN)/arglist

$(BIN)/passvalue: passvalue.c
	gcc -ansi passvalue.c -o $(BIN)/passvalue 

$(BIN)/passreference: passreference.c
	gcc -ansi passreference.c -o $(BIN)/passreference 

$(BIN)/arglist: arglist.c
	gcc -ansi arglist.c -o $(BIN)/arglist 
