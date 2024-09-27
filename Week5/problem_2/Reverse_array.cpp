#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    
    vector<int> numbers = {1, 2, 3, 4, 5}; //the value of the input

    cout << "Input: [";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << (i != numbers.size() - 1 ? ", " : "");
    }
    cout << "]" << std::endl;

    vector<int> reversedNumbers = numbers;  // Make a copy of the input vector
    reverse(reversedNumbers.begin(), reversedNumbers.end());

    cout << "Output: [";
    for (size_t i = 0; i < reversedNumbers.size(); ++i) {
        cout << reversedNumbers[i] << (i != reversedNumbers.size() - 1 ? ", " : "");
    }
    cout << "]" << std::endl;

    return 0;
}
