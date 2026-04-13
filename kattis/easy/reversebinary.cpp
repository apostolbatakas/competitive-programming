#include <iostream>

using namespace std;

int main () {
    int n;
    
    cin >> n;
    
    int reversed =  0;
    
    while (n > 0) {
        reversed = reversed * 2 + (n % 2);
        n /= 2;
    }
    
    cout << reversed << endl;
}
