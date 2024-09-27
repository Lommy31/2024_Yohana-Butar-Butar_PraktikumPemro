#include <iostream>
#include <vector>

int main() {
    std::vector<int> original = {1, 2, 3, 4, 5};  // Initialize an example vector
    std::vector<int> reversed;  // Create an empty vector for the reversed elements

    // Print the original vector as Input
    std::cout << "Input: [";
    for (size_t i = 0; i < original.size(); ++i) {
        std::cout << original[i];
        if (i < original.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";

    // Reverse the vector manually
    for (int i = original.size() - 1; i >= 0; --i) {
        reversed.push_back(original[i]);
    }

    // Print the reversed vector as Output
    std::cout << "Output: [";
    for (size_t i = 0; i < reversed.size(); ++i) {
        std::cout << reversed[i];
        if (i < reversed.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";

    return 0;
}
