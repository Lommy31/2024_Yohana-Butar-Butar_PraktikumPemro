#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    int number1, number2, number3;
    ofstream outputFile("largest_number_output.txt"); // Declare file stream object to write to a file

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter the first number: ";
    cin >> number1;
    outputFile << "Enter the first number: " << number1 << endl;

    cout << "Enter the second number: ";
    cin >> number2;
    outputFile << "Enter the second number: " << number2 << endl;

    cout << "Enter the third number: ";
    cin >> number3;
    outputFile << "Enter the third number: " << number3 << endl;

    int largest = max(max(number1, number2), number3);
    cout << "\nThe large number is: " << largest << endl;
    outputFile << "\nThe large number is: " << largest << endl;

    outputFile.close();

    cout << "Output saved to largest_number_output.txt" << endl;
    return 0;
}
