# Target to compile the object file
determinant_equation: determinant_equation.o
	g++ determinant_equation.o -o determinant_equation.exe

# Target to compile the C++ program
determinant_equation.o: determinant_equation.cpp
	g++ -c determinant_equation.cpp -o determinant_equation.o

# Target to run the program (interactively)
run: determinant_equation
	./determinant_equation.exe

# Target to compile the object Test file
determinant_equationTest: determinant_equationTest.o
	g++ determinant_equationTest.o -o determinant_equationTest.exe

# Target to compile the C++ Test program
determinant_equationTest.o: determinant_equationTest.cpp
	g++ -c determinant_equationTest.cpp -o determinant_equationTest.o

# Target to run the Test program
test: determinant_equationTest
	./determinant_equationTest.exe

# Target to clean up compiled files
clean:
	rm -f determinant_equation.o determinant_equationTest.o determinant_equation.exe determinant_equationTest.exe

