#include <iostream>
#include <vector>
using namespace std;

struct StudentRec {
    int idnim;
    float uts;
    float uas;
};

// Function to calculate the average score for a student
float calculateAverage(float uts, float uas) {
    return (uts + uas) / 2;
}

// Test function to verify the average calculation
void runTests() {
    // Test cases: Each test case contains (idnim, uts, uas, expected_average)
    vector<vector<float>> testCases = {
        {123, 85.0, 90.0, 87.5},   // Test case 1
        {456, 70.0, 75.0, 72.5},   // Test case 2
        {789, 60.0, 80.0, 70.0},   // Test case 3
        {101, 100.0, 95.0, 97.5},  // Test case 4
        {202, 50.0, 40.0, 45.0}    // Test case 5
    };

    bool allTestsPassed = true;  // Variable to check if all tests pass

    for (size_t i = 0; i < testCases.size(); ++i) {
        // Calculate the average from the uts and uas
        float result = calculateAverage(testCases[i][1], testCases[i][2]);
        
        // Compare result with expected average
        if (result == testCases[i][3]) {
            cout << "Test case " << i + 1 << " passed." << endl;
        } else {
            cout << "Test case " << i + 1 << " failed." << endl;
            cout << "Expected: " << testCases[i][3] << ", but got: " << result << endl;
            allTestsPassed = false;
        }
    }

    // Final result output
    if (allTestsPassed) {
        cout << "All test cases passed." << endl;
    } else {
        cout << "Some tests failed." << endl;
    }
}

int main() {
    runTests();  // Run the test cases
    return 0;
}
