#include <iostream>
#include <vector>

// Function to reverse the input vector
std::vector<int> reverseVector(const std::vector<int>& input) {
    std::vector<int> reversed;
    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }
    return reversed;
}

int main() {
    // Test Case: Define the input and the expected output
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expectedOutput = {5, 4, 3, 2, 1};

    // Get the reversed vector using reverseVector function
    std::vector<int> output = reverseVector(input);

    // Check if the output matches the expected output
    if (output == expectedOutput) {
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test not passed" << std::endl;
    }

    return 0;
}
