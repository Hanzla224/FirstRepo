#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    
    cout << "Enter three numbers: "; // taking three numbers from the user
    cin >> num1 >> num2 >> num3;

    double smallest; 

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }   // used if else condition to find out which number is smaller and print

   
    cout << "The smallest number is: " << smallest << std::endl; // will show which number is smallest

    return 0;
}
