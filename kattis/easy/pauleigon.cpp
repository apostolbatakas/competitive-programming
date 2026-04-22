#include <iostream>

using namespace std;

int main() {
    
    long long n, p, q;
    
    cin >> n >> p >> q;
    
    long long points = p + q;
    
    long long set = (points / n)% 2;
    
    if (!set) {
        cout << "paul" << endl;
    }
    else {
        cout << "opponent" << endl;
    }
}