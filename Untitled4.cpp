#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the X pattern (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 1;
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {              //it will  print an X pattern
            if (j == i || j == n - i + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
