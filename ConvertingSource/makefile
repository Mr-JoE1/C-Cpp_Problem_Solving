BIN=.

all: $(BIN)/dosform $(BIN)/unixform

clean:
	rm -rf $(BIN)/dosform
	rm -rf $(BIN)/unixform

$(BIN)/dosform: dosform.c
	gcc -ansi dosform.c -o $(BIN)/dosform 

$(BIN)/unixform: unixform.c
	gcc -ansi unixform.c -o $(BIN)/unixform 
