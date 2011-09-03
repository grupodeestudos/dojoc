

SRC=src

srcfiles=$(wildcard $(SRC)/*.c)
objfiles=$(patsubst %.c,%.o,$(srcfiles))


all:
	gcc -ggdb -I src/ -c $(srcfiles)
	gcc -ggdb -I src/ -o main *.o


run: all
	./main


clean:
	find . -type f -name '*~' | xargs rm -f
	find . -type f -name '*.o' | xargs rm -f
	rm -f main
