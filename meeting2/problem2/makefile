all:
	g++ -o quadratic_equation quadratic_equation.cpp

dump:
	objdump -d quadratic_equation > quadratic_equation.asm

clean:
	rm -f quadratic_equation.o quadratic_equation

run: quadratic_equation
	./quadratic_equation
