#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long a, sum = 0;
    
    cin >> n;
    vector<long long> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }
    
    long long max1 = 0, max2 = 0;
    
    
    for (int i = 0; i < n; i++) {
        if (b[i] >= max1) {
            max2 = max1; // push old max1 down
            max1= b[i]; // update max1
        }
        else if (b[i] > max2) {
            max2 = b[i]; //update max2
        }
    }
    
    if (max1 + max2 >= sum){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
