all:
	g++ -o sum_all_n sum_all_n.cpp

dump:
	objdump -d sum_all_n > sum_all_n.asm

clean:
	rm -f sum_all_n.o sum_all_n

run: sum_all_n
	./sum_all_n
