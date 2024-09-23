#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a, b, c;
cout << "Homework 3 P. Programming:";
cout << "\n--------------------------------";
cout << "\nEnter coefficients a, b, and c: ";
cout << "\na: ";
cin >> a;
cout << "b: ";
cin >> b;
cout << "c: ";
cin >> c;
double determinant = pow(b, 2) - 4 * a * c;
if (determinant > 0) {
double x1 = (-b + sqrt(determinant)) / (2 * a);
double x2 = (-b - sqrt(determinant)) / (2 * a);
cout << "The roots are real and distinc\n";
cout << "\nx1 = " << x1 << "\nx2 = " << x2 << endl;
}
else if (determinant == 0) {
double x = -b / (2 * a);
cout << "The roots are real and equal\n";
cout << "\nx1 = x2 = " << x << endl;
}
else {
double realPart = -b / (2 * a);
double imaginaryPart = sqrt(-determinant) / (2 * a);
cout << "The roots are imaginary";
cout << "\nx1 = " << realPart << " + " << imaginaryPart << "i" << endl;
cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
}
return 0;
}
