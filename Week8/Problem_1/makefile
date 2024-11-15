# Target to compile the object file
Insertion: Insertion.o
	g++ Insertion.o -o Insertion.exe

# Target to compile the C++ program
Insertion.o: Insertion.cpp
	g++ -c Insertion.cpp -o Insertion.o

# Target to run the program (interactively)
run: Insertion
	./Insertion.exe

# Target to compile the object Test file
InsertionTest: InsertionTest.o
	g++ InsertionTest.o -o InsertionTest.exe

# Target to compile the C++ Test program
InsertionTest.o: InsertionTest.cpp
	g++ -c InsertionTest.cpp -o InsertionTest.o

# Target to run the Test program
test: InsertionTest
	./InsertionTest.exe

# Target to clean up compiled files
clean:
	rm -f Insertion.o InsertionTest.o Insertion.exe InsertionTest.exe




