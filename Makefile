
all: obj/LibrarySource.o install
INC=inc/

obj/%.o : src/%.c
	gcc -c -I $(INC) $< -o $@

install:
	ar -q lib/libmyLibrary.a obj/LibrarySource.o