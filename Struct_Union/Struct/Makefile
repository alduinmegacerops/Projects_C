all: prog

prog: Src/main.o Lib/func.o
	gcc -o prog Lib\func.o Src\main.o

Src/main.o: Src/main.c Inc/main.h
	gcc -c --std=c99 -o Src\main.o  Src\main.c

Lib/func.o: Lib/func.c
	gcc -c --std=c99 -o Lib\func.o  Lib\func.c
