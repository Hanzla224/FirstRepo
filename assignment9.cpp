#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double rad, area;

    
    cout << "Enter the radius of the circle: ";
    cin >> rad;                                 // to get radius from the user

  
    area = M_PI * pow(rad, 2); // to calculate area

 
    cout << "The area of the circle is: " << area << std::endl; // will show the result

    return 0;
}
