#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to perform addition
int addition(int x, int y) {
    return x + y; //  the formula of addition
}

// Function to perform difference
int difference(int x, int y) {
    return x - y; // the formula of difference
}

int main() {
    vector<string> results; // Vector to store results
    vector<string> expectedResults; // Vector to store expected results

    // Example test cases (you can modify these as needed)
    vector<pair<int, int>> testCases = {
        {101, 17},
        {14, 42}
    };

    // Compute results for each test case
    for (const auto& testCase : testCases) {
        int x = testCase.first;
        int y = testCase.second;
        
        // Compute and store results
        results.push_back("The Addition of " + to_string(x) + " and " + to_string(y) + " is: " + to_string(addition(x, y)));
        results.push_back("The Difference of " + to_string(x) + " and " + to_string(y) + " is: " + to_string(difference(x, y)));
        
        // Store expected results for comparison
        expectedResults.push_back("The Addition of " + to_string(x) + " and " + to_string(y) + " is: " + to_string(x + y));
        expectedResults.push_back("The Difference of " + to_string(x) + " and " + to_string(y) + " is: " + to_string(x - y));
    }

    // Check if the results match expected values
    bool allCorrect = true;
    for (size_t i = 0; i < results.size(); ++i) {
        if (results[i] != expectedResults[i]) {
            allCorrect = false;
        }
    }

    // Display results
    for (const auto& result : results) {
        cout << result << endl;
    }

    // Check if all results are correct
    if (allCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}

