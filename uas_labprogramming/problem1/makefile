# Target to compile the object file
maximumlist: maximumlist.o
	g++ maximumlist.o -o maximumlist.exe

# Target to compile the C++ program
maximumlist.o: maximumlist.cpp
	g++ -c maximumlist.cpp -o maximumlist.o

# Target to run the program (interactively)
run: maximumlist
	./maximumlist.exe

# Target to compile the object Test file
maximumlistTest: maximumlistTest.o
	g++ maximumlistTest.o -o maximumlistTest.exe

# Target to compile the C++ Test program
maximumlistTest.o: maximumlistTest.cpp
	g++ -c maximumlistTest.cpp -o maximumlistTest.o

# Target to run the Test program
test: maximumlistTest
	./maximumlistTest.exe

# Target to clean up compiled files
clean:
	rm -f maximumlist.o maximumlistTest.o maximumlist.exe maximumlistTest.exe
