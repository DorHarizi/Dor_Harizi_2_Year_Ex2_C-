all: connections
libmat.a: my_mat.o
	ar -rcs libmat.a my_mat.o
my_mat.o:
	gcc -g -Wall -c my_mat.c
connections: libmat.a
	gcc -static -Wall -g main.c -L. -lmat -o connections
.PHONY: clean all

clean:
	rm -f *.o connections lib*
