# QUESTIONS FOR CONSIDERATION
# 
CFLAGS=-std=c99 -Wall -g

test: square
	gcc ${CFLAGS} -o square_test square.o square_test.c
	
encoder: square
	gcc ${CFLAGS} -o encoder square.o encoder.c 
	
square:
	gcc ${CFLAGS} -c square.c

clean:
	rm -f square square_test encoder square.o
	
all: clean square test encoder
