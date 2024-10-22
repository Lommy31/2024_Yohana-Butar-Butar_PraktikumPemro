#include <iostream>
using namespace std;

int gcd(int x, int y) { //functoin of calculate the value GCD
    if ( x%y == 0) return y;
    else return gcd(y, x%y);
}

int main() {
  
    int x,y;
    
    cout << "Exercise Three Recurrence Function to calculate GCD\n";
    cout << "===================================================\n";
    cout << " The Number of x and y: "; // to put the value
    cin >> x >> y;
    cout << "The Value of " << x << " and " << y << " GCD are: ";
    cout << gcd(x,y) << endl; //The total value of GCD

    return 0;
}
