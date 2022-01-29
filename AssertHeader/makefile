BIN=.

all: $(BIN)/assert_demo1 $(BIN)/assert_demo2

clean:
	rm -rf $(BIN)/assert_demo1
	rm -rf $(BIN)/assert_demo2

$(BIN)/assert_demo1: assert_demo1.c
	gcc assert_demo1.c -o $(BIN)/assert_demo1 

$(BIN)/assert_demo2: assert_demo2.c
	gcc assert_demo2.c -o $(BIN)/assert_demo2 
