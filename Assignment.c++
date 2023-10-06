#include <iostream>
using namespace std;

int main() 
{
    int num_rows;
    
    
    cout<< "Enter the number of rows: ";  // take the number of rows from the user
     cin >> num_rows;

    
    for (int i = 1; i <= num_rows; ++i) {      // Loop  the rows
        
        for (int j = 1; j <= num_rows - i; ++j) {
            cout << " ";
        }
        
       
        for (int k = 1; k <= i; ++k) {
            cout << "* ";                      // Print one extra asterisks in each row
        }
        
        cout << endl;              // Move to the next line after each row
    }

    return 0;
}
