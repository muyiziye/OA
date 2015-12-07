OBJECT += init/main.o menu/menu.o functionctrl/structControl.o
oa:$(OBJECT)
	cc -o oa init/main.o menu/menu.o functionctrl/structControl.o

menu/menu.o:
	(cd menu;make)
init/main.o:
	(cd init;make)
functionctrl/structControl.o:
	(cd functionctrl;make)

.PHONY:clean
clean:
	(cd init;make clean)
	(cd menu;make clean)
	(cd functionctrl;make clean)
	-rm -f oa
