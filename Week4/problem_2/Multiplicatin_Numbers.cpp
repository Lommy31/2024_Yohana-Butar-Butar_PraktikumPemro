#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: "; //asking the user to enter the value
    cin >> n;

    cout << "Output:" << endl; //show the output of the multiplication 

    for (int i = 1; i <= 3; ++i) { 
        cout << n << " x " << i << " = " << n * i << endl;
    } //Showing the first three rows of the multiplication table
    
    cout << "..." << endl;

    cout << n << " x 10 = " << n * 10 << endl; //showing the last row from the multiplication table

    return 0;
}


