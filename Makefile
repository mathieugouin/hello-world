# test makefile
all : main.c
	gcc -g3 -Og -Wall -o main main.c

clean :
	rm main
