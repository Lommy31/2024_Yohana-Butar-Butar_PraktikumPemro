#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    // Test case values for a, b, and c
    int a = 1, b = -3, c = 2;  // Corresponds to the equation x^2 - 3x + 2 = 0

    // Variables to store discriminant and roots
    int d, x1, x2;

    // Calculate discriminant
    d = b * b - 4 * a * c;
    cout << "The Total of Discriminant: " << d << endl;

    // Compute roots based on discriminant
    vector<string> result;
    if (d > 0) {  // Real and different roots
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        result.push_back("Roots are Real and Different");
        result.push_back("x1: " + to_string(x1));
        result.push_back("x2: " + to_string(x2));
    } else if (d == 0) {  // Real and same roots
        x1 = -b / (2 * a);
        result.push_back("Roots are Real and Same");
        result.push_back("x1 = x2 = " + to_string(x1));
    } else {  // Complex roots
        result.push_back("d < 0, There is No Real Root");
    }

    // Expected results for the given test case
    vector<string> expectedResults = {
        "Roots are Real and Different",
        "x1: 2",
        "x2: 1"
    };

    // Check if the results match expected values
    bool allCorrect = true;
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != expectedResults[i]) {
            allCorrect = false;
            break;
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
