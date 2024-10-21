#include <iostream>
using namespace std;

  void addition(int x, int y){
        int add = x + y; //fincton to perform adddition
        cout << "The Addition of " << x << " and " << y << " are: " << add << endl;
  }
  
  void difference(int x, int y){
        int diff = x - y; //fincton to perform adddition
        cout << "The Difference of " << x << " and " << y << " are: " << diff << endl;
  }

int main() { //main function

    int x,y;
    cout << "Exercise One Using Subprogram and Function\n";
    cout << "==========================================\n";
    cout << "The Value of x and y: "; //imput the value of x
    cin >> x >> y;
    
    addition (x,y); //calling the function
    difference (x,y);
    
    return 0;
}
