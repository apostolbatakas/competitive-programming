#include <iostream>

using namespace std;

bool distinct(int n) {
    
    bool seen[10] = {false}; // Frequency array for digits 0 - 9
    
    while (n > 0) {
        
        int digit = n % 10;
        
        if(seen[digit]) { // If we've seen it before return false
            return false;
        }
        seen[digit] = true; // Mark the digit as seen, by changing the value to true
        n /= 10;     // Move to the next digit
    }
    
    return true; // If all the digits are distinct, then we return true
}

int main () {
    int y;
    cin >> y;
    
    while (true) {
        y++;    // Move to the next year immediately
        if(distinct(y)) {
            cout << y << endl;
            break;
        }
    }
}
