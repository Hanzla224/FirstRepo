#include <iostream>
using namespace std

int main() {
    double weight_kg, height_m, bmi;

 
    cout << "Enter your weight in kilograms: "; // get user's weight
    cin >> weight_kg;

   
    cout << "Enter your height in meters: "; // get user's height
    cin >> height_m;

 
    bmi = weight_kg / (height_m * height_m); // formula to calculate bmi

   
    cout << "Your Body Mass Index (BMI) is: " << bmi << std::endl; // will show the user's bmi

 
  
    return 0;
}
