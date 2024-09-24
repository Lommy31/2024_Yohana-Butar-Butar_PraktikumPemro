#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath> // for absolute value comparison

using namespace std;

// Function to calculate the net salary of the employee
double calculateNetSal(double bSal, double percen, double install, double insu) {
    double grossSal = bSal * (percen / 100); // Calculating the gross salary
    double tax = grossSal * 0.20;            // Calculating the tax
    double netSal = grossSal - tax - install - insu; // Calculating the net salary
    return netSal;
}

// Function to format and display the payslip
vector<string> generatePayslip(string name, double bSal, double percen, double install, double insu) {
    double grossSal = bSal * (percen / 100);
    double tax = grossSal * 0.20;
    double netSal = calculateNetSal(bSal, percen, install, insu);

    // Store the results for testing
    vector<string> result;
    result.push_back("Name: " + name);
    result.push_back("Gross Salary: Rp" + to_string(grossSal));
    result.push_back("Tax (20%): Rp" + to_string(tax));
    result.push_back("Installment: Rp" + to_string(install));
    result.push_back("Insurance: Rp" + to_string(insu));
    result.push_back("Net Salary: Rp" + to_string(netSal));

    return result;
}

// Function to run tests and check if the results match expected values
void runTest() {
    bool allCorrect = true;

    // Test Case 1: Low salary, high deductions
    vector<string> result1 = generatePayslip("Yohana Amelia", 30000, 90, 3000, 1500);
    vector<string> expected1 = {
        "Name: Yohana Amelia",
        "Gross Salary: Rp27000.000000",   // 90% of 30000
        "Tax (20%): Rp5400.000000",       // 20% of 27000
        "Installment: Rp3000.000000",
        "Insurance: Rp1500.000000",
        "Net Salary: Rp17100.000000"      // 27000 - 5400 - 3000 - 1500
    };
    if (result1 != expected1) allCorrect = false;

    // Test Case 2: High salary, medium deductions
    vector<string> result2 = generatePayslip("Finanazwa", 100000, 120, 2000, 1300);
    vector<string> expected2 = {
        "Name: Finanazwa",
        "Gross Salary: Rp120000.000000",   // 120% of 100000
        "Tax (20%): Rp24000.000000",       // 20% of 120000
        "Installment: Rp2000.000000",
        "Insurance: Rp1300.000000",
        "Net Salary: Rp92600.000000"       // 120000 - 24000 - 2000 - 1300
    };
    if (result2 != expected2) allCorrect = false;

    // Test Case 3: Average salary, low deductions
    vector<string> result3 = generatePayslip("Regina Joan", 45000, 85, 1000, 1100);
    vector<string> expected3 = {
        "Name: Regina Joan",
        "Gross Salary: Rp38250.000000",    // 85% of 45000
        "Tax (20%): Rp7650.000000",        // 20% of 38250
        "Installment: Rp1000.000000",
        "Insurance: Rp1100.000000",
        "Net Salary: Rp28500.000000"       // 38250 - 7650 - 1000 - 1100
    };
    if (result3 != expected3) allCorrect = false;

    // Test Case 4: Low salary, no deductions
    vector<string> result4 = generatePayslip("Deira Aliyah", 30000, 90, 0, 0);
    vector<string> expected4 = {
        "Name: Deira Aliyah",
        "Gross Salary: Rp27000.000000",    // 90% of 30000
        "Tax (20%): Rp5400.000000",        // 20% of 27000
        "Installment: Rp0.000000",
        "Insurance: Rp0.000000",
        "Net Salary: Rp21600.000000"       // 27000 - 5400 - 0 - 0
    };
    if (result4 != expected4) allCorrect = false;

    // Output test result
    if (allCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }
}

int main() {
    // Run the test function
    runTest();
    return 0;
}
