#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// Calculate the salary of the employee
double calculateNetSal(double bSal, double percen, double install, double insu) {
    double grossSal = bSal * (percen / 100); // Calculating the gross salary
    double tax = grossSal * 0.20; //Calculate the tax
    double netSal = grossSal - tax - install - insu; // Calculating the net salary
    return netSal;
}

// Function of payslip
void Payslip(string name, double bSal, double percen, double install, double insu, ofstream& outputFile) {
    double grossSal = bSal * (percen / 100);
    double tax = grossSal * 0.20;
    double netSal = calculateNetSal(bSal, percen, install, insu);// The output of the payslip

    cout << "------------------------------------\n";
    cout << "Name of The Employee: " << name << endl;
    cout << "------------------------------------\n";
    cout << left << setw(20) << "The Gross Salary: " << ": Rp" << right << setw(10)
         << fixed << setprecision(2) << grossSal << endl;
    cout << left << setw(20) << "Tax (20%)" << ": Rp" << right << setw(10) << fixed
         << setprecision(2) << tax << endl;
    cout << left << setw(20) << "Installment" << ": Rp" << right << setw(10) << fixed
         << setprecision(2) << install << endl;
    cout << left << setw(20) << "Insurance" << ": Rp" << right << setw(10) << fixed
         << setprecision(2) << insu << endl;
    cout << left << setw(20) << "Net Salary" << ": Rp" << right << setw(10) << fixed
         << setprecision(2) << netSal << endl;
    cout << "------------------------------------\n";

    outputFile << "------------------------------------\n";
    outputFile << "Name of The Employee: " << name << endl;
    outputFile << "------------------------------------\n";
    outputFile << left << setw(20) << "The Gross Salary: " << ": Rp" << right << setw(10)
               << fixed << setprecision(2) << grossSal << endl;
    outputFile << left << setw(20) << "Tax (20%)" << ": Rp" << right << setw(10) << fixed
               << setprecision(2) << tax << endl;
    outputFile << left << setw(20) << "Installment" << ": Rp" << right << setw(10) << fixed
               << setprecision(2) << install << endl;
    outputFile << left << setw(20) << "Insurance" << ": Rp" << right << setw(10) << fixed
               << setprecision(2) << insu << endl;
    outputFile << left << setw(20) << "Net Salary" << ": Rp" << right << setw(10) << fixed
               << setprecision(2) << netSal << endl;
    outputFile << "------------------------------------\n";
}

// Data of the employee
void runProgram() {
    ofstream outputFile("payslip_output.txt"); // Declare file stream object to write to a file

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    // Using low salary with high deductions
    cout << "Employee 1:\n";
    outputFile << "Employee 1:\n";
    Payslip("Yohana Amelia", 30000, 90, 3000, 1500, outputFile);

    // Test Case 2: High salary with medium deductions
    cout << "\nEmployee 2:\n";
    outputFile << "\nEmployee 2:\n";
    Payslip("Finanazwa", 100000, 120, 2000, 1300, outputFile);

    // Test Case 3: Average salary with low deductions
    cout << "\nEmployee 3:\n";
    outputFile << "\nEmployee 3:\n";
    Payslip("Regina Joan", 45000, 85, 1000, 1100, outputFile);

    // Test Case 4: Low salary with no deductions
    cout << "\nEmployee 4:\n";
    outputFile << "\nEmployee 4:\n";
    Payslip("Deira Aliyah", 30000, 90, 0, 0, outputFile);

    // Close the file after writing
    outputFile.close();

    cout << "Output saved to payslip_output.txt
