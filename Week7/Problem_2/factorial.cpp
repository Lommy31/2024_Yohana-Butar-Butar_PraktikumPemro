#include <iostream>
using namespace std;

int functional(int x) { //to call itself
    if (x > 1) {
        return x * functional(x -1); // tge formula of the function
    } else {
        return 1;
    }    
}

int main() {
    
    int x;
    cout << "Exercise Two Recurrence Function to Calculate x!\n";
    cout << "================================================\n";
    cout << "Enter The Value of x: "; // to put the value of x
    cin >> x;
    cout << "The Function of " << x << "! = " << functional(x) << endl; // call the output

    return 0;
}
