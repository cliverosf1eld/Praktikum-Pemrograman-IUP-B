all:
	g++ -o reverse_array reverse_array.cpp

dump:
	objdump -d reverse_array > reverse_array.asm

clean:
	rm -f reverse_array.o reverse_array

run: reverse_array
	./reverse_array
