#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Data for the test case
    string name = "Test Employee";
    int grossSalary = 10000;
    int installment = 500;
    int insurance = 300;

    // Compute tax and net salary
    double tax = grossSalary * 0.2;
    int netSalary = grossSalary - tax - installment - insurance;

    // Store actual results
    vector<string> result;
    result.push_back("Name: " + name);
    result.push_back("Gross Salary: Rp" + to_string(grossSalary));
    result.push_back("Tax (20%): Rp" + to_string(static_cast<int>(tax)));  // Cast to int for simplicity
    result.push_back("Installment: Rp" + to_string(installment));
    result.push_back("Insurance: Rp" + to_string(insurance));
    result.push_back("Net Salary: Rp" + to_string(netSalary));

    // Expected results
    vector<string> expectedResults = {
        "Name: Test Employee",
        "Gross Salary: Rp10000",
        "Tax (20%): Rp2000",
        "Installment: Rp500",
        "Insurance: Rp300",
        "Net Salary: Rp7200"
    };

    // Check if the results match expected values
    bool allCorrect = true;
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != expectedResults[i]) {
            allCorrect = false;
        }
    }

    // Output test result
    if (allCorrect) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }

    return 0;
}
