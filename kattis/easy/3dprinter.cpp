#include <iostream>

using namespace std;

int main() {
    
    int n, p = 1, count = 0;
    cin >> n;
    
    while (p < n) {
        
        p *= 2;
        count++;
    }
    cout << count + 1 << endl;
}
