all:
	g++ -o largest_number largest_number.cpp

dump:
	objdump -d largest_number > mlargest_number.asm

clean:
	rm -f largest_number.o largest_number

run: largest_number
	./largest_number
