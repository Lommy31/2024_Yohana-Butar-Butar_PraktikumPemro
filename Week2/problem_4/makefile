# Target to compile the object file
Quadratic_Equation: Quadratic_Equation.o
	g++ Quadratic_Equation.o -o pay.exe

# Target to compile the C++ program
Quadratic_Equation.o: Quadratic_Equation.cpp
	g++ -c Quadratic_Equation.cpp -o Quadratic_Equation.o

# Target to run the program (interactively)
run: Quadratic_Equation
	./pay.exe

# Target to compile the object Test file
Quadratic_EquationTest: Quadratic_EquationTest.o
	g++ Quadratic_EquationTest.o -o Quadratic_EquationTest.exe

# Target to compile the C++ Test program
Quadratic_EquationTest.o: Quadratic_EquationTest.cpp
	g++ -c Quadratic_EquationTest.cpp -o Quadratic_EquationTest.o

# Target to run the Test program
test: Quadratic_EquationTest
	./Quadratic_EquationTest.exe

# Target to clean up compiled files
clean:
	rm -f Quadratic_Equation.o Quadratic_EquationTest.o pay.exe Quadratic_EquationTest.exe

