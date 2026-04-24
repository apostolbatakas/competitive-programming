#include <iostream>

using namespace std;

int main() {
    int t;
    long long n, k, x;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        
        cin >> n >> k >> x;
        long long sum1 = (k * (k + 1)) / 2;
        long long sum2 = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2 ;
                
        if (x >= sum1 && x <= sum2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
