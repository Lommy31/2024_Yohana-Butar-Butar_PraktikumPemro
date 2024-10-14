# Target to compile the main program
student_rec: student_rec.o
	g++ student_rec.o -o student_rec.exe

# Target to compile the main C++ file
student_rec.o: student_rec.cpp
	g++ -c student_rec.cpp -o student_rec.o

# Target to run the main program (interactively)
run: student_rec
	./student_rec.exe

# Target to compile the test program
student_recTest: student_recTest.o
	g++ student_recTest.o -o student_recTest.exe

# Target to compile the test C++ file
student_recTest.o: student_recTest.cpp
	g++ -c student_recTest.cpp -o student_recTest.o

# Target to run the test program
test: student_recTest
	./student_recTest.exe

# Target to clean up all compiled files
clean:
	rm -f student_rec.o student_recTest.o student_rec.exe student_recTest.exe
