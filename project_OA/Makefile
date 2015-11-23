oa:main.o menu.o
	cc -o oa main.o menu.o

main.o:main.c menu.h
	cc -c main.c -o main.o

menu.o:menu.c menu.h
	cc -c menu.c -o menu.o


clean:
	-rm *.o oa

