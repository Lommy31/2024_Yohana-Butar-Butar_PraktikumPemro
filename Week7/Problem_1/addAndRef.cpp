#include <iostream>
using namespace std;

  void addition(int x, int y){
        int add = x + y; //fincton to perform adddition
        cout << "the sum of " << x << " and " << y << " is: " << add << endl;
  }
  
  void difference(int x, int y){
        int add = x - y; //fincton to perform adddition
        cout << "the sum of " << x << " and " << y << " is: " << add << endl;
  }

int main() { //main function

    int x,y;
    cout << "Exercise One Using Subprogram and Function\n";
    cout << "==========================================\n";
    cout << "The Value of x: "; //imput the value of x
    cin >> x >> y;
    
    addition (x,y); //calling the function
    difference (x,y);
    
    return 0;
}
