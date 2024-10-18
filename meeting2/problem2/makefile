# Target to compile the object file
quadratic_equation: quadratic_equation.o
	g++ quadratic_equation.o -o quadratic_equation.exe

# Target to compile the C++ program
quadratic_equation.o: quadratic_equation.cpp
	g++ -c quadratic_equation.cpp -o quadratic_equation.o

# Target to run the program (interactively)
run: quadratic_equation
	./quadratic_equation.exe

# Target to compile the object Test file
quadratic_equationTest: quadratic_equationTest.o
	g++ quadratic_equationTest.o -o quadratic_equationTest.exe

# Target to compile the C++ Test program
quadratic_equationTest.o: quadratic_equationTest.cpp
	g++ -c quadratic_equationTest.cpp -o quadratic_equationTest.o

# Target to run the Test program
test: quadratic_equationTest
	./quadratic_equationTest.exe

# Target to clean up compiled files
clean:
	rm -f quadratic_equation.o quadratic_equationTest.o quadratic_equation.exe quadratic_equationTest.exe
