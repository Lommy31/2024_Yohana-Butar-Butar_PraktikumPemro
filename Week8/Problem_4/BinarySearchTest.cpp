#include <iostream>
#include <vector>
using namespace std;

struct Student {
    long long NISN;
    string Name;
    int Value;
};

// Binary search function to find the index by NISN
int binarySearch(const vector<Student>& students, long long targetNISN) {
    int left = 0, right = students.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (students[mid].NISN == targetNISN)
            return mid;
        if (students[mid].NISN < targetNISN)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Return -1 if NISN is not found
}

void runTests() {
    vector<Student> students = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    bool allTestsPassed = true;

    // Test case 1: Existing NISN
    int index = binarySearch(students, 9950310962);
    if (index == -1 || students[index].Name != "Ronaldo Valentino Uneputty" || students[index].Value != 80) {
        allTestsPassed = false;
    }

    // Test case 2: Non-existent NISN
    index = binarySearch(students, 9999999999);
    if (index != -1) {
        allTestsPassed = false;
    }

    // Output test result
    if (allTestsPassed) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test not passed." << endl;
    }
}

int main() {
    runTests();
    return 0;
}
