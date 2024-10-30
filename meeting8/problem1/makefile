# Target to compile the object file
sorts: sorts.o
	g++ sorts.o -o sorts.exe

# Target to compile the C++ program
sorts.o: sorts.cpp
	g++ -c sorts.cpp -o sorts.o

# Target to run the program (interactively)
run: sorts
	./sorts.exe

# Target to compile the object Test file
sortsTest: sortsTest.o
	g++ sortsTest.o -o sortsTest.exe

# Target to compile the C++ Test program
sortsTest.o: sortsTest.cpp
	g++ -c sortsTest.cpp -o sortsTest.o

# Target to run the Test program
test: sortsTest
	./sortsTest.exe

# Target to clean up compiled files
clean:
	rm -f sorts.o sortsTest.o sorts.exe sortsTest.exe
