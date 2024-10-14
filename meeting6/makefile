# Target to compile the object file
examresults: examresults.o
	g++ examresults.o -o examresults.exe

# Target to compile the C++ program
examresults.o: examresults.cpp
	g++ -c examresults.cpp -o examresults.o

# Target to run the program (interactively)
run: examresults
	./examresults.exe

# Target to compile the object Test file
examresultsTest: examresultsTest.o
	g++ examresultsTest.o -o examresultsTest.exe

# Target to compile the C++ Test program
examresultsTest.o: examresultsTest.cpp
	g++ -c examresultsTest.cpp -o examresultsTest.o

# Target to run the Test program
test: examresultsTest
	./examresultsTest.exe

# Target to clean up compiled files
clean:
	rm -f examresults.o examresultsTest.o examresults.exe examresultsTest.exe
