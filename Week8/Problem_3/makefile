# Target to compile the object file
Bubble: Bubble.o
	g++ Bubble.o -o Bubble.exe

# Target to compile the C++ program
Bubble.o: Bubble.cpp
	g++ -c Bubble.cpp -o Bubble.o

# Target to run the program (interactively)
run: Bubble
	./Bubble.exe

# Target to compile the object Test file
BubbleTest: BubbleTest.o
	g++ BubbleTest.o -o BubbleTest.exe

# Target to compile the C++ Test program
BubbleTest.o: BubbleTest.cpp
	g++ -c BubbleTest.cpp -o BubbleTest.o

# Target to run the Test program
test: BubbleTest
	./BubbleTest.exe

# Target to clean up compiled files
clean:
	rm -f Bubble.o BubbleTest.o Bubble.exe BubbleTest.exe




