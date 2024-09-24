# Target to compile the object file
larger_number: larger_number.o
	g++ larger_number.o -o larger_number.exe

# Target to compile the C++ program
larger_number.o: larger_number.cpp
	g++ -c larger_number.cpp -o larger_number.o

# Target to run the program (interactively)
run: larger_number
	./larger_number.exe

# Target to compile the object Test file
larger_numberTest: larger_numberTest.o
	g++ larger_numberTest.o -o larger_numberTest.exe

# Target to compile the C++ Test program
larger_numberTest.o: larger_numberTest.cpp
	g++ -c larger_numberTest.cpp -o larger_numberTest.o

# Target to run the Test program
test: larger_numberTest
	./larger_numberTest.exe

# Target to clean up compiled files
clean:
	rm -f larger_number.o larger_numberTest.o larger_number.exe larger_numberTest.exe


