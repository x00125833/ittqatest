CC=gcc
CFLAGS=-I.
DEPS = hellomake.h
OBJ = Grades.o 

%.o: %.C $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Grades: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
