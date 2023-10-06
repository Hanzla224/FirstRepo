#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";     // take a characher
    cin >> character;


    
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        cout << character << " is a vowel." << endl;
    } else { 
        cout << character << " is not a vowel." << endl;         // Check if the character is a vowel or not
    }

    return 0;
}
