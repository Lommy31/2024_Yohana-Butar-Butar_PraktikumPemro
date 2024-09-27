#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    // Input vector
    vector<int> numbers = {1, 2, 3, 4, 5}; // The value of the input

    // Print the input
    cout << "Input: [";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << (i != numbers.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    // Reverse the vector
    vector<int> reversedNumbers = numbers;  // Make a copy of the input vector
    reverse(reversedNumbers.begin(), reversedNumbers.end());

    // Print the output (reversed vector)
    cout << "Output: [";
    for (size_t i = 0; i < reversedNumbers.size(); ++i) {
        cout << reversedNumbers[i] << (i != reversedNumbers.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    // Expected reversed result
    vector<int> expected = {5, 4, 3, 2, 1}; // The expected reversed result

    // Check if the reversed result matches the expected result
    bool testPassed = (reversedNumbers == expected);

    // Print "Test passed" or "Test not passed"
    if (testPassed) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}

