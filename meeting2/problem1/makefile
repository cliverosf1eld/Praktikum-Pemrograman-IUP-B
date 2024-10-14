# Target to compile the object file
meeting2: meeting2.o
	g++ meeting2.o -o meeting2.exe

# Target to compile the C++ program
meeting2.o: meeting2.cpp
	g++ -c meeting2.cpp -o meeting2.o

# Target to run the program (interactively)
run: meeting2
	./meeting2.exe

# Target to compile the object Test file
meeting2Test: meeting2Test.o
	g++ meeting2Test.o -o meeting2Test.exe

# Target to compile the C++ Test program
meeting2Test.o: meeting2Test.cpp
	g++ -c meeting2Test.cpp -o meeting2Test.o

# Target to run the Test program
test: meeting2Test
	./meeting2Test.exe

# Target to clean up compiled files
clean:
	rm -f meeting2.o meeting2Test.o meeting2.exe meeting2Test.exe
