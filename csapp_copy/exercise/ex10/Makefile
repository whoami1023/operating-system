cc = gcc
obj = ex10-2 ex10-3 ex10-5
include_dir = ../../include
bin_path = ../../bin/

all : $(obj)
.PHONY : all

ex10-2 : ex10-2.o
	$(cc) ex10-2.o $(bin_path)csapp.o -o ex10-2

ex10-2.o : ex10-2.c
	$(cc) -I $(include_dir) -c ex10-2.c -o ex10-2.o


ex10-3 : ex10-3.o
	$(cc) ex10-3.o $(bin_path)csapp.o -o ex10-3

ex10-3.o : ex10-3.c
	$(cc) -I $(include_dir) -c ex10-3.c

ex10

clean:
	rm *.o
