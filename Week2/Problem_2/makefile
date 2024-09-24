# Target to compile the object file
coefficient: coefficient.o
	g++ coefficient.o -o coefficient.exe

# Target to compile the C++ program
coefficient.o: coefficient.cpp
	g++ -c coefficient.cpp -o coefficient.o

# Target to run the program (interactively)
run: coefficient
	./coefficient.exe

# Target to compile the object Test file
coefficientTest: coefficientTest.o
	g++ coefficientTest.o -o coefficientTest.exe

# Target to compile the C++ Test program
coefficientTest.o: coefficientTest.cpp
	g++ -c coefficientTest.cpp -o coefficientTest.o

# Target to run the Test program
test: coefficientTest
	./coefficientTest.exe

# Target to clean up compiled files
clean:
	rm -f coefficient.o coefficientTest.o coefficient.exe coefficientTest.exe

