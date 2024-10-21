# Target to compile the object file
addsub: addsub.o
	g++ addsub.o -o addsub.exe

# Target to compile the C++ program
addsub.o: addsub.cpp
	g++ -c addsub.cpp -o addsub.o

# Target to run the program (interactively)
run: addsub
	./addsub.exe

# Target to compile the object Test file
addsubTest: addsubTest.o
	g++ addsubTest.o -o addsubTest.exe

# Target to compile the C++ Test program
addsubTest.o: addsubTest.cpp
	g++ -c addsubTest.cpp -o addsubTest.o

# Target to run the Test program
test: addsubTest
	./addsubTest.exe

# Target to clean up compiled files
clean:
	rm -f addsub.o addsubTest.o addsub.exe addsubTest.exe
