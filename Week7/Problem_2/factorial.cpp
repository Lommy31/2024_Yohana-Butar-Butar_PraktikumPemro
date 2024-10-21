#include <iostream>
using namespace std;

int finctional (int x);

int functional(int x) { //call itself
    if (x > 1) {
        return x * functional(x -1);
    } else {
        return 1;
    }    
}

int main() {
    
    int x;
    cout << "Exercise Two Recurrence Function to Calculate x!\n";
    cout << "================================================\n";
    cout << "Enter The Value of x: ";
    cin >> x;
    cout << "The Function of " << x << "! = " << functional(x) << endl;

    return 0;
}
