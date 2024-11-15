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

    // Bubble Sort by Value
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].Value < students[j + 1].Value) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    cout << "Sorted The Value Using Bubble Sort :\n";
    cout << "========================================\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].NISN << " " << students[i].Name << " " << students[i].Value << endl;
    }

    return 0;
}
