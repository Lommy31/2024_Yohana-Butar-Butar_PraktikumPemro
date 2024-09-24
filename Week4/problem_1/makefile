
# Target to compile the object file
Sum_Natural_Numbers: Sum_Natural_Numbers.o
	g++ Sum_Natural_Numbers.o -o Sum_Natural_Numbers.exe

# Target to compile the C++ program
Sum_Natural_Numbers.o: Sum_Natural_Numbers.cpp
	g++ -c Sum_Natural_Numbers.cpp -o Sum_Natural_Numbers.o

# Target to run the program (interactively)
run: Sum_Natural_Numbers
	./Sum_Natural_Numbers.exe

# Target to compile the object Test file
Sum_Natural_NumbersTest: Sum_Natural_NumbersTest.o
	g++ Sum_Natural_NumbersTest.o -o Sum_Natural_NumbersTest.exe

# Target to compile the C++ Test program
Sum_Natural_NumbersTest.o: Sum_Natural_NumbersTest.cpp
	g++ -c Sum_Natural_NumbersTest.cpp -o Sum_Natural_NumbersTest.o

# Target to run the Test program
test: Sum_Natural_NumbersTest
	./Sum_Natural_NumbersTest.exe

# Target to clean up compiled files
clean:
	rm -f Sum_Natural_Numbers.o Sum_Natural_NumbersTest.o Sum_Natural_Numbers.exe Sum_Natural_NumbersTest.exe
