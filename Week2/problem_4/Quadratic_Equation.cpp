#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Quadrat(double a, double b, double c) {
double discrim = b * b - 4 * a * c; //The formuka to calculate the coeficient of a, b, and c
cout << "The Value of Coefficients: " <<a<< "a, " << b<< "b, " <<c<< "c" << endl;
if (discrim > 0) {//The formula to find the roots
double root1 = (-b + sqrt(discrim)) / (2 * a);
double root2 = (-b - sqrt(discrim)) / (2 * a);
cout << "So The Discriminant is Positive " << discrim << endl;
cout << "The Roots are Real and Different";
cout << "\nRoot 1: " << root1 << endl;
cout << "Root 2: " << root2 << endl;
}
else if (discrim == 0) { //real root (double root)
double root = -b / (2 * a);
cout << "So The Discriminant is Zero " << discrim << endl;
cout << "The Roots are Real and the Same";
cout << "\nRoot: " << root << endl;
}
else { //complex root
double realPart = -b / (2 * a);
double imaginaryPart = sqrt(-discrim) / (2 * a);
cout << "So The Discriminant is negative " << discrim << endl;
cout << "Roots are Complex and Different\n";
cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
}
}
void runProgram() {
cout << "Test 1:\n";
Quadrat(1, -3, 2); // Case 1
cout << "\nTest 2:\n";
Quadrat(1, -2, 1); // Case 2
cout << "\nTest 2=3:\n";
Quadrat(1, 2, 5); // Case 3
}
int main() {
runProgram();
return 0;
}
