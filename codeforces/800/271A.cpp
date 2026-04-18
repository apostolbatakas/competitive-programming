#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    while (true) {
        y++;
        int temp = y;
        bool dig[10] = {false}; // Frequency array. In each iteration all values become false
        bool found = true;  // If all digits are digits we stop the outer loop
        while (temp > 0) {
            if (dig[temp % 10] == true) {  // If the value is true we know that a digit appeared 2 times, and we break the loop
                found = false;
                break;
            }
            dig[temp % 10] = true;
            temp /= 10;
        }
        if (found) {
            break;
        }
    }
    cout << y << endl;
}

