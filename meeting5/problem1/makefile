all:
	g++ -o fizzbuzz fizzbuzz.cpp

dump:
	objdump -d fizzbuzz > fizzbuzz.asm

clean:
	rm -f fizzbuzz.o fizzbuzz

run: fizzbuzz
	./fizzbuzz
