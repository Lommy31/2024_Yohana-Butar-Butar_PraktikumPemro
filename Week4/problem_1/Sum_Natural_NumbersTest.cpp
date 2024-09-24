#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of first n natural numbers
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// Function to print the explanation of the sum
void printExplanation(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
    }
}

int main() {
    // Test cases
    vector<int> testCases = {1, 5, 10, 20}; // Example test cases
    // Expected results
    vector<int> expectedResults = {1, 15, 55, 210}; // Expected sums for test cases

    // Variable to check if all tests pass
    bool allTestsPassed = true;

    // Loop through test cases and compare results with expected values
    for (size_t i = 0; i < testCases.size(); ++i) {
        int n = testCases[i];
        int result = calculateSum(n);

        cout << "Input: " << n << endl;
        cout << "Output: Sum = " << result << endl;
        cout << "Explanation: ";
        printExplanation(n);
        cout << " = " << result << endl;

        // Compare with the expected result
        if (result == expectedResults[i]) {
            cout << "Test case " << i + 1 << " passed." << endl;
        } else {
            cout << "Test case " << i + 1 << " not passed." << endl;
            allTestsPassed = false;
        }
        cout << "---------------------------" << endl;
    }

    // Final result
    if (allTestsPassed) {
        cout << "Tests Passed." << endl;
    } else {
        cout << "Test not Passed." << endl;
    }

    return 0;
}
