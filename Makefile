# test makefile
all : main.c
	gcc -O0 -Wall -o main main.c

clean :
	rm main
