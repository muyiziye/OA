INCLUDE += structControl.h ../define/structDef.h ../io/io.h

structControl.o:structControl.c $(INCLUDE)
	cc -c $< -o $@ -I ../define -I ../io

.PHONY:clean
clean:
	-rm -f *.o
