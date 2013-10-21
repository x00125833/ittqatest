CC=gcc
CFLAGS=-I.
OBJ = Grades.o 
OBJ2 = Grades_v2.o

%.o: %.C $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Grades: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

Grades_v2: $(OBJ2)
	gcc -o Grades $^ $(CFLAGS)
