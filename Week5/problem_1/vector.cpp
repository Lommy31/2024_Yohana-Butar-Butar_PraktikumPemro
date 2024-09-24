#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> result; // vector to store the result

    // Compute the result
    for (int i = 0; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }

    // Print the result
    for (int i = 1; i <= 100; ++i) {
        cout << result[i] << endl;
    }

    return 0;
}

