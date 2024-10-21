# Target to compile the object file
addAndDiff: addAndDiff.o
	g++ addAndDiff.o -o addAndDiff.exe

# Target to compile the C++ program
addAndDiff.o: addAndDiff.cpp
	g++ -c addAndDiff.cpp -o addAndDiff.o

# Target to run the program (interactively)
run: addAndDiff
	./addAndDiff.exe

# Target to compile the object Test file
addAndDiffTest: addAndDiffTest.o
	g++ addAndDiffTest.o -o addAndDiffTest.exe

# Target to compile the C++ Test program
addAndDiffTest.o: addAndDiffTest.cpp
	g++ -c addAndDiffTest.cpp -o addAndDiffTest.o

# Target to run the Test program
test: addAndDiffTest
	./addAndDiffTest.exe

# Target to clean up compiled files
clean:
	rm -f addAndDiff.o addAndDiffTest.o addAndDiff.exe addAndDiffTest.exe


