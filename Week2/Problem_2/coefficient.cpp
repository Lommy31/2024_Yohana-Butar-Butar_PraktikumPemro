#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    int a, b, c, d, x1, x2, quad; // we use integer
    ofstream outputFile("quadratic_equation_output.txt"); // Declare file stream object to write to a file

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Problem 2" << endl;
    cout << "-----------------------------";
    cout << "\nThe Number of a, b, and c : "; //Put the number of a, b, and c
    cin >> a >> b >> c;

    outputFile << "Problem 2" << endl;
    outputFile << "-----------------------------" << endl;
    outputFile << "The Number of a, b, and c : " << a << ", " << b << ", " << c << endl;

    d = b * b - 4 * a * c; //The formula
    cout << "The Total of Discriminant: " << d << endl;
    outputFile << "The Total of Discriminant: " << d << endl;

    if (d > 0 ) { //To find if the root less than zero
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "\nRoots are Real and Different" << endl;
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
        outputFile << "Roots are Real and Different" << endl;
        outputFile << "x1: " << x1 << endl;
        outputFile << "x2: " << x2 << endl;
    }
    else if (d == 0 ) { //To find if the root is equal to zero
        x1 = -b/(2 * a);
        cout << "Roots are Real and Same" << endl;
        cout << "x1 = x2 =" <<x1 << endl;
        outputFile << "Roots are Real and Same" << endl;
        outputFile << "x1 = x2 =" <<x1 << endl;
    }
    else { //To find if the root has no root to complex
        cout << "d<0, There is No Root to Complex" << endl;
        outputFile << "d<0, There is No Root to Complex" << endl;
    }

    // Close the file after writing
    outputFile.close();

    cout << "Output saved to quadratic_equation_output.txt" << endl;

    return 0;
}
