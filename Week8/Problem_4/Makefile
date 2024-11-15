# Target to compile the object file
BinarySearch: BinarySearch.o
	g++ BinarySearch.o -o BinarySearch.exe

# Target to compile the C++ program
BinarySearch.o: BinarySearch.cpp
	g++ -c BinarySearch.cpp -o BinarySearch.o

# Target to run the program (interactively)
run: BinarySearch
	./BinarySearch.exe

# Target to compile the object Test file
BinarySearchTest: BinarySearchTest.o
	g++ BinarySearchTest.o -o BinarySearchTest.exe

# Target to compile the C++ Test program
BinarySearchTest.o: BinarySearchTest.cpp
	g++ -c BinarySearchTest.cpp -o BinarySearchTest.o

# Target to run the Test program
test: BinarySearchTest
	./BinarySearchTest.exe

# Target to clean up compiled files
clean:
	rm -f BinarySearch.o BinarySearchTest.o BinarySearch.exe BinarySearchTest.exe

