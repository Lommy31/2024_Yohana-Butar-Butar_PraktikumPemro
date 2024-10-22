#include <iostream>
using namespace std;

// Function to compute factorial
int functional(int x) {
    if (x > 1) {
        return x * functional(x - 1);
    } else {
        return 1;
    }
}

int main() {
    // Test cases and  expected results
    int testCases[] = {5, 3, 7};
    int expectedResults[] = {120, 6, 5040};
    
    bool allCorrect = true;
    
    // Loop through test cases
    for (int i = 0; i < 3; ++i) {
        int result = functional(testCases[i]);
        cout << "The Function of " << testCases[i] << "! = " << result << endl;

        // to check if the result matches the expected result
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


