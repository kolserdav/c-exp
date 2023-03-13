LIB_NAME = t2
compile:
	mkdir -p shared
	gcc -c $(LIB_NAME).c -fPIC -o shared/$(LIB_NAME).o
	gcc -shared shared/$(LIB_NAME).o -o shared/lib$(LIB_NAME).so
	cp -f $(LIB_NAME).h $(PREFIX)/include
	cp -f shared/lib$(LIB_NAME).so $(PREFIX)/lib
	gcc -L$(PREFIX)/lib -l$(LIB_NAME) main.c
