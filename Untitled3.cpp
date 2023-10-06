#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    cout << "Enter the coefficients of the quadratic equation:" << endl; // get the coefficients from the user
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    
    discriminant = b * b - 4 * a * c; //formula to Calculate the discriminant

  
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a); // checking if the discriminant we get is positive negative or zeroo 
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "Roots are real and equal. Root = " << root1 << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl; // will show the result
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
