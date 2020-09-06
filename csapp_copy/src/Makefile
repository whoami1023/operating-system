obj = csapp.o
cc = gcc
include_dir = ../include

all : $(obj)
.PHONY : all

csapp.o : csapp.c
	$(cc) -I $(include_dir) -c csapp.c -o csapp.o


install:
	mv csapp.o ../bin	 
