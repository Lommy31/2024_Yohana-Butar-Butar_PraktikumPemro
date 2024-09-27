#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Input: "; //asking the user by enter the value 
    cin >> n;

    for (int i = 1; i <= n; ++i) { //to calculate the sum by loop
        sum += i;
    }

    cout << "Output: Sum = " << sum << endl;//the sum of the input

    cout << "Explanation: ";
    for (int i = 1; i <= n; ++i) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;

    return 0;
}
