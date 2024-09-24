#include <iostream>
#include <vector>
using namespace std;

// Function to find the largest number
int findLargest(int number1, int number2, int number3) {
    if (number1 >= number2 && number1 >= number3) {
        return number1;
    } else if (number2 >= number3) {
        return number2;
    } else {
        return number3;
    }
}

int main() {
    // Define test cases as vectors of 3 integers
    vector<vector<int>> testCases = {
        {3, 5, 2},  // Test case 1
        {7, 1, 9},  // Test case 2
        {12, 12, 12}, // Test case 3
        {100, 50, 75}, // Test case 4
        {25, 75, 50}  // Test case 5
    };

    // Expected results for each test case
    vector<int> expectedResults = {
        5,  // Expected result for test case 1
        9,  // Expected result for test case 2
        12, // Expected result for test case 3
        100, // Expected result for test case 4
        75   // Expected result for test case 5
    };

    // Variable to check if all tests pass
    bool allTestsPassed = true;

    // Loop through test cases and compare results with expected values
    for (size_t i = 0; i < testCases.size(); ++i) {
        int result = findLargest(testCases[i][0], testCases[i][1], testCases[i][2]);
        if (result == expectedResults[i]) {
            cout << "Test case " << i + 1 << " passed." << endl;
        } else {
            cout << "Test case " << i + 1 << " not passed." << endl;
            allTestsPassed = false;
        }
    }

    // Final result
    if (allTestsPassed) {
        cout << "Tests passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}
