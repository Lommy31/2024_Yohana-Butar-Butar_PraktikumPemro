#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;

   if (number1 >= number2) {
   if (number1 >= number3) {
     cout << "\nThe large number is: " << number1 << endl;
   } 
   else {
     cout << "\nThe large number is: " << number3 << endl;
    }
  } 
   else {
     if (number2 >= number3) {
     cout << "\nThe large number is: " << number2 << endl;
  } 
   else {
   cout << "\nThe large number is: " << number3 << endl;
   }
 }

 return 0;
}
