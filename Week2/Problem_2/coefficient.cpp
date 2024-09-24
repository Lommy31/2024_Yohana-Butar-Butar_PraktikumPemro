#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b, c, d, x1, x2, quad; // we use integer
cout << "Problem 2" << endl;
cout << "---------------------------------";
cout << "\nThe Number of a, b, and c : "; //Put the number of a, b, and c
cin >> a >> b >> c;

d = b * b - 4 * a * c; //The formula
cout << "The Total of Discriminant: " << d << endl;
if (d > 0 ) { //To find if the root less than zero
x1 = (-b + sqrt(d)) / (2 * a);
x2 = (-b - sqrt(d)) / (2 * a);
cout << "\nRoots are Real and Different" << endl;
cout << "x1: " << x1 << endl;
cout << "x2: " << x2 << endl;
}
else if (d == 0 ) { //To find if the root is equal to zero
x1 = -b/(2 * a);
cout << "Roots are Real and Same" << endl;
cout << "x1 = x2 =" <<x1 << endl;
}
else { //To find if the root has no root to complex
cout << "d<0, There is No Root to Complex";
}
}
