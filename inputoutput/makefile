# Target to compile the object file
hw: hw.o
	g++ hw.o -o hw.exe

# Target to compile the C++ program
hw.o: hw.cpp
	g++ -c hw.cpp -o hw.o

# Target to run the program (interactively)
run: hw
	./hw.exe

# Target to compile the object Test file
hwTest: hwTest.o
	g++ hwTest.o -o hwTest.exe

# Target to compile the C++ Test program
hwTest.o: hwTest.cpp
	g++ -c hwTest.cpp -o hwTest.o

# Target to run the Test program
test: hwTest
	./hwTest.exe

# Target to clean up compiled files
clean:
	rm -f hw.o hwTest.o hw.exe hwTest.exe
