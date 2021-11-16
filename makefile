CC=g++
CFLAGS=-I.
DEPS = Graph.h
OBJ = GraphTesting.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

GraphTesting: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
     
