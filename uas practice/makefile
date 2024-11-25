# Target to compile the object file
sumdigits: sumdigits.o
	g++ sumdigits.o -o sumdigits.exe

# Target to compile the C++ program
sumdigits.o: sumdigits.cpp
	g++ -c sumdigits.cpp -o sumdigits.o

# Target to run the program (interactively)
run: sumdigits
	./sumdigits.exe

# Target to compile the object Test file
sumdigitsTest: sumdigitsTest.o
	g++ sumdigitsTest.o -o sumdigitsTest.exe

# Target to compile the C++ Test program
sumdigitsTest.o: sumdigitsTest.cpp
	g++ -c sumdigitsTest.cpp -o sumdigitsTest.o

# Target to run the Test program
test: sumdigitsTest
	./sumdigitsTest.exe

# Target to clean up compiled files
clean:
	rm -f sumdigits.o sumdigitsTest.o sumdigits.exe sumdigitsTest.exe
