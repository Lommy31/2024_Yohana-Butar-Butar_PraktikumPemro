#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a;
    a = 2;
    ofstream outputFile("conditional_output.txt");

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    if (a < 4) {
        cout << " " << a << " is less than 4" << endl;
        outputFile << " " << a << " is less than 4" << endl;
    }

    outputFile.close();

    cout << "Output saved to conditional_output.txt" << endl;
    return 0;
}
