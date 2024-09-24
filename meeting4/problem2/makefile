all:
	g++ -o multiplicationtable multiplicationtable.cpp

dump:
	objdump -d multiplicationtable > mmultiplicationtabler.asm

clean:
	rm -f multiplicationtable.o multiplicationtable

run: multiplicationtable
	./multiplicationtable
