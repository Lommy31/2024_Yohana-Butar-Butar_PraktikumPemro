# Target to compile the object file
Multiplication_Numbers: Multiplication_Numbers.o
	g++ Multiplication_Numbers.o -o Multiplication_Numbers.exe

# Target to compile the C++ program
Multiplication_Numbers.o: Multiplication_Numbers.cpp
	g++ -c Multiplication_Numbers.cpp -o Multiplication_Numbers.o

# Target to run the program (interactively)
run: Multiplication_Numbers
	./Multiplication_Numbers.exe

# Target to compile the object Test file
Multiplication_NumbersTest: Multiplication_NumbersTest.o
	g++ Multiplication_NumbersTest.o -o Multiplication_NumbersTest.exe

# Target to compile the C++ Test program
Multiplication_NumbersTest.o: Multiplication_NumbersTest.cpp
	g++ -c Multiplication_NumbersTest.cpp -o Multiplication_NumbersTest.o

# Target to run the Test program
test: Multiplication_NumbersTest
	./Multiplication_NumbersTest.exe

# Target to clean up compiled files
clean:
	rm -f Multiplication_Numbers.o Multiplication_NumbersTest.o Multiplication_Numbers.exe Multiplication_NumbersTest.exe


