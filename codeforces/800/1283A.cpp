#include <iostream>
using namespace std;

int main() {
    int t, h, m;
    
    cin >> t;
    
    while (t--) {
        cin >> h >> m;
        int min = h * 60 + m;
        cout << 24 * 60 - min << "\n";
    }
}
