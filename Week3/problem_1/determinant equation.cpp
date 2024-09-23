#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    double a, b, c;
    ofstream outputFile("quadratic_equation_output.txt"); // Declare file stream object to write to a file

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Homework 3 P. Programming:";
    cout << "\n--------------------------------";
    cout << "\nEnter coefficients a, b, and c: ";
    cout << "\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    outputFile << "Homework 3 P. Programming:" << endl;
    outputFile << "--------------------------------" << endl;
    outputFile << "Enter coefficients a, b, and c: " << endl;
    outputFile << "a: " << a << endl;
    outputFile << "b: " << b << endl;
    outputFile << "c: " << c << endl;

    double determinant = pow(b, 2) - 4 * a * c;
    if (determinant > 0) {
        double x1 = (-b + sqrt(determinant)) / (2 * a);
        double x2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "The roots are real and distinct" << endl;
        cout << "\nx1 = " << x1 << "\nx2 = " << x2 << endl;
        outputFile << "The roots are real and distinct" << endl;
        outputFile << "\nx1 = " << x1 << "\nx2 = " << x2 << endl;
    }
    else if (determinant == 0) {
        double x = -b / (2 * a);
        cout << "The roots are real and equal" << endl;
        cout << "\nx1 = x2 = " << x << endl;
        outputFile << "The roots are real and equal" << endl;
        outputFile << "\nx1 = x2 = " << x << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "The roots are imaginary" << endl;
        cout << "\nx1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        outputFile << "The roots are imaginary" << endl;
        outputFile << "\nx1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        outputFile << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    outputFile.close();

    cout << "Output saved to quadratic_equation_output.txt" << endl;
    return 0;
}
