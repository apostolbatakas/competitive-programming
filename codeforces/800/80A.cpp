#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) { // Insted of including <cmath> to use the function sqrt(), we can write i * i <= n
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    
    cin >> n >> m;
    
    n++;
    
    while(!isPrime(n)) {
        n++; // Keep increasing n by 1, until we find the next prime
    }
    
    if (n == m) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
