# Target to compile the object file
factorial: factorial.o
	g++ factorial.o -o factorial.exe

# Target to compile the C++ program
factorial.o: factorial.cpp
	g++ -c factorial.cpp -o factorial.o

# Target to run the program (interactively)
run: factorial
	./factorial.exe

# Target to compile the object Test file
factorialTest: factorialTest.o
	g++ factorialTest.o -o factorialTest.exe

# Target to compile the C++ Test program
factorialTest.o: factorialTest.cpp
	g++ -c factorialTest.cpp -o factorialTest.o

# Target to run the Test program
test: factorialTest
	./factorialTest.exe

# Target to clean up compiled files
clean:
	rm -f factorial.o factorialTest.o factorial.exe factorialTest.exe



