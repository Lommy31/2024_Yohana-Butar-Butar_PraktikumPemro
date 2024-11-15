#include <iostream>
#include <vector>
using namespace std;

struct Student {
    long long NISN;
    string Name;
    int Value;
};

// Sequential search function to update the name of students with Value 60
void updateName(vector<Student>& students, int targetValue, const string& newName) {
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].Value == targetValue) {
            students[i].Name = newName;
        }
    }
}

int main() {
    vector<Student> students = { //the student data
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };
    
    // Update the name of students with Value 60 to "Joko"
    updateName(students, 60, "Joko");

     cout << "The Output of Changing The Data\n:";
     cout << "============================================================\n";

    // Display the updated list
    for (const auto& student : students) {
        cout << "NISN: " << student.NISN << ", Name: " << student.Name << ", Value: " << student.Value << endl;
    }

    return 0;
}

