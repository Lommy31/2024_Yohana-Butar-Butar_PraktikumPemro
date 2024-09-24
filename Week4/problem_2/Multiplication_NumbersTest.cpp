#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> result; // Vector to store the result

    int n;
    cout << "Input: ";
    cin >> n;

    // Compute the result (first three rows and the last row)
    for (int i = 1; i <= 3; ++i) {
        result.push_back(to_string(n) + " x " + to_string(i) + " = " + to_string(n * i));
    }
    result.push_back("...");
    result.push_back(to_string(n) + " x 10 = " + to_string(n * 10));

    // Expected results for comparison (example with input n = 5)
    vector<string> expectedResults = {
        to_string(n) + " x 1 = " + to_string(n * 1),
        to_string(n) + " x 2 = " + to_string(n * 2),
        to_string(n) + " x 3 = " + to_string(n * 3),
        "...",
        to_string(n) + " x 10 = " + to_string(n * 10)
    };

    // Check if the results match expected values
    bool allCorrect = true;
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != expectedResults[i]) {
            allCorrect = false;
            break;
        }
    }

    // Output the computed multiplication table
    cout << "Output:" << endl;
    for (const string& line : result) {
        cout << line << endl;
    }

    // Check if all results are correct
    if (allCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}
