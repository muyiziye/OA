OBJECT += init/main.o menu/menu.o functionctrl/structControl.o io/io.o
oa:$(OBJECT)
	cc -o oa init/main.o menu/menu.o functionctrl/structControl.o io/io.o

menu/menu.o:
	(cd menu;make)
init/main.o:
	(cd init;make)
functionctrl/structControl.o:
	(cd functionctrl;make)
io/io.o:
	(cd io;make)

.PHONY:clean
clean:
	(cd init;make clean)
	(cd menu;make clean)
	(cd functionctrl;make clean)
	(cd io;make clean)
	-rm -f oa
