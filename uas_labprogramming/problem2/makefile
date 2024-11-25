# Target to compile the object file
factorial2: factorial2.o
	g++ factorial2.o -o factorial2.exe

# Target to compile the C++ program
factorial2.o: factorial2.cpp
	g++ -c factorial2.cpp -o factorial2.o

# Target to run the program (interactively)
run: factorial2
	./factorial2.exe

# Target to compile the object Test file
factorial2Test: factorial2Test.o
	g++ factorial2Test.o -o factorial2Test.exe

# Target to compile the C++ Test program
factorial2Test.o: factorial2Test.cpp
	g++ -c factorial2Test.cpp -o factorial2Test.o

# Target to run the Test program
test: factorial2Test
	./factorial2Test.exe

# Target to clean up compiled files
clean:
	rm -f factorial2.o factorial2Test.o factorial2.exe factorial2Test.exe
