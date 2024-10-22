#include <iostream>
using namespace std;

// Function to perform addition
int addition(int x, int y) {
    return x + y;
}

// Function to perform subtraction (difference)
int difference(int x, int y) {
    return x - y;
}

int main() {
    // Test cases
    int x = 10, y = 5;
    int expectedAdd = 15;
    int expectedDiff = 5;

    // Run the addition test
    bool addCorrect = (addition(x, y) == expectedAdd);
    bool diffCorrect = (difference(x, y) == expectedDiff);

    // Output test result
    if (addCorrect && diffCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}
