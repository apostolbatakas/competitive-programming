#include <iostream>
using namespace std;

int main() {
    int t, x, y, n;
    
    cin >> t;
    
    while (t--) {
        cin >> x >> y >> n;
        
        cout << n - (n - y) % x << endl; // We start from n, and move backwards to fix the remainder to y
    }
}