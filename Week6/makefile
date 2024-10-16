# Target to compile the object file
StudentData: StudentData.o
	g++ StudentData.o -o StudentData.exe

# Target to compile the C++ program
StudentData.o: StudentData.cpp
	g++ -c StudentData.cpp -o StudentData.o

# Target to run the program (interactively)
run: StudentData
	./StudentData.exe

# Target to compile the object Test file
StudentDataTest: StudentDataTest.o
	g++ StudentDataTest.o -o StudentDataTest.exe

# Target to compile the C++ Test program
StudentDataTest.o: StudentDataTest.cpp
	g++ -c StudentDataTest.cpp -o StudentDataTest.o

# Target to run the Test program
test: StudentDataTest
	./StudentDataTest.exe

# Target to clean up compiled files
clean:
	rm -f StudentData.o StudentDataTest.o StudentData.exe StudentDataTest.exe
