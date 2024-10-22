#include <iostream>
using namespace std;

// Function to calculate the GCD using recursion
int gcd(int x, int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    // Test cases and expected results
    int testCases[][2] = {{48, 18}, {56, 98}, {25, 5}};
    int expectedResults[] = {6, 14, 5};
    
    bool allCorrect = true;
    
    // Loop through test cases
    for (int i = 0; i < 3; ++i) {
        int result = gcd(testCases[i][0], testCases[i][1]);
        cout << "The GCD of " << testCases[i][0] << " and " << testCases[i][1] << " is: " << result << endl;

        // Check if the result matches the expected result
        if (result != expectedResults[i]) {
            allCorrect = false;
        }
    }

    // Output test result
    if (allCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}


