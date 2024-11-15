#include <iostream>
#include <vector>
using namespace std;

struct Student {
    long long NISN;
    string Name;
    int Value;
};

// Binary search function to find student NISN
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

int main() {
    vector<Student> students = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    long long targetNISN = 9950310962; //the target 
    int index = binarySearch(students, targetNISN);

    if (index != -1) {
        cout << "Exercise 8 Binary Search\n";
        cout << "=================================\n";
        cout << "Student NISN [" << targetNISN << "]\n";
        cout << "Name: " << students[index].Name;
        cout << "\nValue: " << students[index].Value << endl;
    } else {
        cout << "Student with NISN " << targetNISN << " not found." << endl;
    }

    return 0;
}

