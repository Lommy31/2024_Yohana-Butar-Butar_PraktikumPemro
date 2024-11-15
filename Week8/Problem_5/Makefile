# Target to compile the object file
Sequential: Sequential.o
	g++ Sequential.o -o Sequential.exe

# Target to compile the C++ program
Sequential.o: Sequential.cpp
	g++ -c Sequential.cpp -o Sequential.o

# Target to run the program (interactively)
run: Sequential
	./Sequential.exe

# Target to compile the object Test file
SequentialTest: SequentialTest.o
	g++ SequentialTest.o -o SequentialTest.exe

# Target to compile the C++ Test program
SequentialTest.o: SequentialTest.cpp
	g++ -c SequentialTest.cpp -o SequentialTest.o

# Target to run the Test program
test: SequentialTest
	./SequentialTest.exe

# Target to clean up compiled files
clean:
	rm -f Sequential.o SequentialTest.o Sequential.exe SequentialTest.exe
