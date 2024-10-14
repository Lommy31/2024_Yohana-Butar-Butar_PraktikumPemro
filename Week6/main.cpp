#include <iostream>
using namespace std;

struct StudentRec {
    int idnim;
    float uts;
    float uas;
};

StudentRec theStudent[50];

int main () {
    int n;
    
        cout << "Enter The NIU of the Student: ";
        cin >> n;
    
    cout << "\nStudent Data\n";
    cout << "=======================\n";
    for (int i=0; i<n; i++) {
        cout << "Enter the NIU " << i +1 << ": ";
        cin >> theStudent[i].idnim;
        cout << "Enter UTS Value  " << i + 1 << ": ";
        cin >>theStudent[i].uts;
        cout << "Enter UAS Value " << i + 1 << ": ";
        cin >> theStudent[i].uas;
        cout << "\n==========================\n";
    
    StudentRec theStudent[n];
  }    
  
    cout << "\n-----------------------\n";
    for (int i=0; i<n; i++) {
        float avarage = (theStudent[i].uts + theStudent[i].uas)/2;
        cout<< "NIM: ";
        cin >> theStudent[i].idnim;
        cout << "Avarage: "<< avarage << endl;
        cout << "----------------------\n";
    }
   
    system("Pause");
    return 0;
}
