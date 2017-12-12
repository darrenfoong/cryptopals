all:
	cppcheck *.c
	gcc -Wall *.c
