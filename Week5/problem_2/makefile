# Target to compile the object file
array: array.o
	g++ array.o -o array.exe

# Target to compile the C++ program
array.o: array.cpp
	g++ -c array.cpp -o array.o

# Target to run the program (interactively)
run: array
	./array.exe

# Target to compile the object Test file
arrayTest: arrayTest.o
	g++ arrayTest.o -o arrayTest.exe

# Target to compile the C++ Test program
arrayTest.o: arrayTest.cpp
	g++ -c arrayTest.cpp -o arrayTest.o

# Target to run the Test program
test: arrayTest
	./arrayTest.exe

# Target to clean up compiled files
clean:
	rm -f array.o arrayTest.o array.exe arrayTest.exe
