#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number1, number2;

    
   cout << "Enter the first number: "; // get first number from the user
   cin >> number1;

    
   cout << "Enter the second number: "; // get second number from the user
   cin >> number2;

    
    double result = pow(number2, number1); // in this step we will calculate the result

   
    cout << "Result is " << result << endl; // in this step we will display the result

    return 0;
}
