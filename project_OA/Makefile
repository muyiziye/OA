OBJECT += init/main.o menu/menu.o
oa:$(OBJECT)
	cc -o oa init/main.o menu/menu.o

menu/menu.o:
	(cd menu;make)
init/main.o:
	(cd init;make)

.PHONY:clean
clean:
	(cd init;make clean)
	(cd menu;make clean)
	-rm oa
