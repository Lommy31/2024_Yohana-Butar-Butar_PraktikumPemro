#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the quadratic equation and return results as strings
vector<string> Quadrat(double a, double b, double c) {
    vector<string> result;
    double discrim = b * b - 4 * a * c; // The formula to calculate the discriminant
    
    result.push_back("The Value of Coefficients: " + to_string(a) + "a, " + to_string(b) + "b, " + to_string(c) + "c");

    if (discrim > 0) { // Real and different roots
        double root1 = (-b + sqrt(discrim)) / (2 * a);
        double root2 = (-b - sqrt(discrim)) / (2 * a);
        result.push_back("So The Discriminant is Positive " + to_string(discrim));
        result.push_back("The Roots are Real and Different");
        result.push_back("Root 1: " + to_string(root1));
        result.push_back("Root 2: " + to_string(root2));
    }
    else if (discrim == 0) { // Real and the same root (double root)
        double root = -b / (2 * a);
        result.push_back("So The Discriminant is Zero " + to_string(discrim));
        result.push_back("The Roots are Real and the Same");
        result.push_back("Root: " + to_string(root));
    }
    else { // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discrim) / (2 * a);
        result.push_back("So The Discriminant is Negative " + to_string(discrim));
        result.push_back("Roots are Complex and Different");
        result.push_back("Root 1: " + to_string(realPart) + " + " + to_string(imaginaryPart) + "i");
        result.push_back("Root 2: " + to_string(realPart) + " - " + to_string(imaginaryPart) + "i");
    }

    return result;
}

// Function to run tests
void runTest() {
    bool allCorrect = true;

    // Test Case 1: Discriminant > 0 (Real and different roots)
    vector<string> result1 = Quadrat(1, -3, 2);
    vector<string> expected1 = {
        "The Value of Coefficients: 1.000000a, -3.000000b, 2.000000c",
        "So The Discriminant is Positive 1.000000",
        "The Roots are Real and Different",
        "Root 1: 2.000000",
        "Root 2: 1.000000"
    };
    if (result1 != expected1) allCorrect = false;

    // Test Case 2: Discriminant == 0 (Real and the same root)
    vector<string> result2 = Quadrat(1, -2, 1);
    vector<string> expected2 = {
        "The Value of Coefficients: 1.000000a, -2.000000b, 1.000000c",
        "So The Discriminant is Zero 0.000000",
        "The Roots are Real and the Same",
        "Root: 1.000000"
    };
    if (result2 != expected2) allCorrect = false;

    // Test Case 3: Discriminant < 0 (Complex roots)
    vector<string> result3 = Quadrat(1, 2, 5);
    vector<string> expected3 = {
        "The Value of Coefficients: 1.000000a, 2.000000b, 5.000000c",
        "So The Discriminant is Negative -16.000000",
        "Roots are Complex and Different",
        "Root 1: -1.000000 + 2.000000i",
        "Root 2: -1.000000 - 2.000000i"
    };
    if (result3 != expected3) allCorrect = false;

    // Output test result
    if (allCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }
}

int main() {
    // Run the test function
    runTest();
    return 0;
}
