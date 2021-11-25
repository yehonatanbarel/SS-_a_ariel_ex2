CC=gcc
AR=ar
FLAGS= -Wall -g
OBJECTS_LIB=libclass.a
OBJECTS_MAIN=main.o

# 8
all: connections 

# 5	
connections : $(OBJECTS_MAIN) libclass.a
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) libclass.a

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

libclass.a: $(OBJECTS_LIB)
	$(AR) -rcs libclass.a $(OBJECTS_LIB)	

.PHONY: clean all
clean:
	rm -f *.o *.a *.so connections

