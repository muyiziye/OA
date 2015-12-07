INCLUDE += structControl.h ../define/structDef.h

structControl.o:
#structControl.o:structControl.c $(INCLUDE)
%.o:%.c $(INCLUDE)
	cc -I ../define/ -c $< -o $@

.PHONY:clean
clean:
	-rm -f *.o
