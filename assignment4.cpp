#include <iostream>
using namespace std;
int main() {
    int rows;

  
    cout << "Enter the number of rows: "; // will take the number of rows from the user
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
    
        int j = 1;
        while (j <= i) {
            cout << "* "; // will print asteriks
            j++;
        }

      
        cout << std::endl;
    }

    return 0;
}
