# Target to compile the object file
Selection: Selection.o
	g++ Selection.o -o Selection.exe

# Target to compile the C++ program
Selection.o: Selection.cpp
	g++ -c Selection.cpp -o Selection.o

# Target to run the program (interactively)
run: Selection
	./Selection.exe

# Target to compile the object Test file
SelectionTest: SelectionTest.o
	g++ SelectionTest.o -o SelectionTest.exe

# Target to compile the C++ Test program
SelectionTest.o: SelectionTest.cpp
	g++ -c SelectionTest.cpp -o SelectionTest.o

# Target to run the Test program
test: SelectionTest
	./SelectionTest.exe

# Target to clean up compiled files
clean:
	rm -f Selection.o SelectionTest.o Selection.exe SelectionTest.exe




