# Target to compile the object file
gcd: gcd.o
	g++ gcd.o -o gcd.exe

# Target to compile the C++ program
gcd.o: gcd.cpp
	g++ -c gcd.cpp -o gcd.o

# Target to run the program (interactively)
run: gcd
	./gcd.exe

# Target to compile the object Test file
gcdTest: gcdTest.o
	g++ gcdTest.o -o gcdTest.exe

# Target to compile the C++ Test program
gcdTest.o: gcdTest.cpp
	g++ -c gcdTest.cpp -o gcdTest.o

# Target to run the Test program
test: gcdTest
	./gcdTest.exe

# Target to clean up compiled files
clean:
	rm -f gcd.o gcdTest.o gcd.exe gcdTest.exe




