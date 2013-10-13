CC=gcc
CFLAGS=-I.
OBJ = Grades.o 

%.o: %.C $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Grades: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
