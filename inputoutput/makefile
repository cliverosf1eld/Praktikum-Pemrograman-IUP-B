# Target to compile the object file
inputoutput: inputoutput.o
	g++ inputoutput.o -o inputoutput.exe

# Target to compile the C++ program
inputoutput.o: inputoutput.cpp
	g++ -c inputoutput.cpp -o inputoutput.o

# Target to run the program (interactively)
run: inputoutput
	./inputoutput.exe

# Target to compile the object Test file
inputoutputTest: inputoutputTest.o
	g++ inputoutputTest.o -o inputoutputTest.exe

# Target to compile the C++ Test program
inputoutputTest.o: inputoutputTest.cpp
	g++ -c inputoutputTest.cpp -o inputoutputTest.o

# Target to run the Test program
test: inputoutputTest
	./inputoutputTest.exe

# Target to clean up compiled files
clean:
	rm -f inputoutput.o inputoutputTest.o inputoutput.exe inputoutputTest.exe
