# Target to compile the object file
binarysearch: binarysearch.o
	g++ binarysearch.o -o binarysearch.exe

# Target to compile the C++ program
binarysearch.o: binarysearch.cpp
	g++ -c binarysearch.cpp -o binarysearch.o

# Target to run the program (interactively)
run: binarysearch
	./binarysearch.exe

# Target to compile the object Test file
binarysearchTest: binarysearchTest.o
	g++ binarysearchTest.o -o binarysearchTest.exe

# Target to compile the C++ Test program
binarysearchTest.o: binarysearchTest.cpp
	g++ -c binarysearchTest.cpp -o binarysearchTest.o

# Target to run the Test program
test: binarysearchTest
	./binarysearchTest.exe

# Target to clean up compiled files
clean:
	rm -f binarysearch.o binarysearchTest.o binarysearch.exe binarysearchTest.exe
