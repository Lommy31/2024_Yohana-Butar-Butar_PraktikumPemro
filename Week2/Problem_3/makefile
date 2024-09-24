
# Target to compile the object file
payslip_calculation: payslip_calculation.o
	g++ payslip_calculation.o -o pay.exe

# Target to compile the C++ program
payslip_calculation.o: payslip_calculation.cpp
	g++ -c payslip_calculation.cpp -o payslip_calculation.o

# Target to run the program (interactively)
run: payslip_calculation
	./pay.exe

# Target to compile the object Test file
payslip_calculationTest: payslip_calculationTest.o
	g++ payslip_calculationTest.o -o payslip_calculationTest.exe

# Target to compile the C++ Test program
payslip_calculationTest.o: payslip_calculationTest.cpp
	g++ -c payslip_calculationTest.cpp -o payslip_calculationTest.o

# Target to run the Test program
test: payslip_calculationTest
	./pay.exe

# Target to clean up compiled files
clean:
	rm -f payslip_calculation.o payslip_calculationTest.o payslip_calculation.exe payslip_calculation.exe

