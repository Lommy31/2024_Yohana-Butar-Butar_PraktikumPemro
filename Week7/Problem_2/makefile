# Target to compile the object file
function: function.o
	g++ function.o -o function.exe

# Target to compile the C++ program
function.o: function.cpp
	g++ -c function.cpp -o function.o

# Target to run the program (interactively)
run: function
	./function.exe

# Target to compile the object Test file
functionTest: functionTest.o
	g++ functionTest.o -o functionTest.exe

# Target to compile the C++ Test program
functionTest.o: functionTest.cpp
	g++ -c functionTest.cpp -o functionTest.o

# Target to run the Test program
test: functionTest
	./functionTest.exe

# Target to clean up compiled files
clean:
	rm -f function.o functionTest.o function.exe functionTest.exe
