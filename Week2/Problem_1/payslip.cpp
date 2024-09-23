#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int gsalary, tax, instal, insue, net;

    // Declare file stream object to write to a file
    ofstream outputFile("payslip.txt");

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Prompt the user for input
    cout << "Payslip For Employee" << endl;
    cout << "--------------------------" << endl;
    cout << "Name of the employee: ";
    cin >> name;
    outputFile << "Payslip For Employee" << endl;
    outputFile << "--------------------------" << endl;
    outputFile << "Name of the employee: " << name << endl;

    cout << "The Gross Salary: : Rp";
    cin >> gsalary;
    outputFile << "The Gross Salary: : Rp" << gsalary << endl;

    tax = gsalary * 0.2;
    cout << "Tax (20%): Rp" << tax << endl;
    outputFile << "Tax (20%): Rp" << tax << endl;

    cout << "Installment: Rp";
    cin >> instal;
    outputFile << "Installment: Rp" << instal << endl;

    cout << "Insurance: Rp";
    cin >> insue;
    outputFile << "Insurance: Rp" << insue << endl;

    net = gsalary - 0.2 * gsalary - instal - insue;
    cout << "Net Salary: Rp" << net << endl;
    outputFile << "Net Salary: Rp" << net << endl;

    // Close the file after writing
    outputFile.close();

    cout << "Payslip generated successfully. Check payslip.txt file." << endl;

    return 0;
}
