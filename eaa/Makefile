CC=gcc
CFLAGS=-I.
OBJ = synth_load.o 

%.o: %.C $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

synth_load: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
