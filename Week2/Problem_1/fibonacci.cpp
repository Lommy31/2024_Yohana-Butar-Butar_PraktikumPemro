#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int gsalary, tax, instal, insue, net;

    // Create an output file stream
    ofstream outputFile("payslip.txt");

    if (!outputFile) {
        cout << "Unable to open output file";
        return 1; // Exit with an error code
    }

    outputFile << "Payslip For Employee" << endl;
    outputFile << "--------------------------" << endl;
    outputFile << "Name of the employee: ";
    cin >> name;
    outputFile << name << endl;

    outputFile << "The Gross Salary: : Rp";
    cin >> gsalary;
    outputFile << gsalary << endl;

    tax = gsalary * 0.2;
    outputFile << "Tax (20%): Rp" << tax << endl;

    outputFile << "Installment: Rp";
    cin >> instal;
    outputFile << instal << endl;

    outputFile << "Insurance: Rp";
    cin >> insue;
    outputFile << insue << endl;

    outputFile << "Net Salary: Rp";
    cin >> gsalary >> instal >> insue;
    net = gsalary - 0.2 * gsalary - instal - insue;
    outputFile << net << endl;

    outputFile.close();

    cout << "Payslip generated successfully. Check payslip.txt file." << endl;

    return 0;
}
