# Target to compile the object file
vector: vector.o
	g++ vector.o -o vector.exe

# Target to compile the C++ program
vector.o: vector.cpp
	g++ -c vector.cpp -o vector.o

# Target to run the program (interactively)
run: vector
	./vector.exe

# Target to compile the object Test file
vectorTest: vectorTest.o
	g++ vectorTest.o -o vectorTest.exe

# Target to compile the C++ Test program
vectorTest.o: vectorTest.cpp
	g++ -c vectorTest.cpp -o vectorTest.o

# Target to run the Test program
test: vectorTest
	./vectorTest.exe

# Target to clean up compiled files
clean:
	rm -f vector.o vectorTest.o vector.exe vectorTest.exe
