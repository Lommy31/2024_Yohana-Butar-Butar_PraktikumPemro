#include <iostream>
#include <vector>
using namespace std;

struct Student {
    long long NISN;
    string Name;
    int Value;
};

// Function to update the name of students with a specific value
void updateName(vector<Student>& students, int targetValue, const string& newName) {
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].Value == targetValue) {
            students[i].Name = newName;
        }
    }
}

bool runTest() {
    // Initial data for testing
    vector<Student> students = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    // Call function to update names of students with Value 60 to "Joko"
    updateName(students, 60, "Joko");

    // Check results
    bool testPassed = true;
    for (const auto& student : students) {
        if (student.Value == 60 && student.Name != "Joko") {
            testPassed = false;
            break;
        }
    }

    return testPassed;
}

int main() {
    if (runTest()) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }
    return 0;
}

