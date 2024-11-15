#include <iostream>
using namespace std;

struct Student {
    long long NISN;
    string Name;
    int Value;
};

int main() {
    Student students[] = { //the student data
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    int n = 7;

    // Selection Sort by NISN
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (students[j].NISN > students[maxIdx].NISN) {
                maxIdx = j;
            }
        }
        swap(students[i], students[maxIdx]);
    }

    cout << "Sorted The Student Data By NISN Using Selection Sort:\n";
    cout << "====================================================\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].NISN << " " << students[i].Name << " " << students[i].Value << endl;
    }

    return 0;
}
