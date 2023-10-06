#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {       // loop is used to get 10 number 1 will add in  the previous number
        sum += i;
    }

    cout << "The sum of the first 10 natural numbers is: " << sum << endl;

    return 0;
}


