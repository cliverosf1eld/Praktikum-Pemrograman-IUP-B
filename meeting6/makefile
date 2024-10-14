# Target to compile the object file
meeting6: meeting6.o
	g++ meeting6.o -o meeting6.exe

# Target to compile the C++ program
meeting6.o: meeting6.cpp
	g++ -c meeting6.cpp -o meeting6.o

# Target to run the program (interactively)
run: meeting6
	./meeting6.exe

# Target to compile the object Test file
meeting6Test: meeting6Test.o
	g++ meeting6Test.o -o meeting6Test.exe

# Target to compile the C++ Test program
meeting6Test.o: meeting6Test.cpp
	g++ -c meeting6Test.cpp -o meeting6Test.o

# Target to run the Test program
test: meeting6Test
	./meeting6Test.exe

# Target to clean up compiled files
clean:
	rm -f meeting6.o meeting6Test.o meeting6.exe meeting6Test.exe
