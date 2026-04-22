#include <iostream>

using namespace std;

int main() {
    int r, n, flag;
    
    cin >> r >> n;
    
    int t[n];
    
    if (r == n) {
        cout << "too late" << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    
    for (int i = 1; i <= r; i++) {
        flag = 1;
        for (int j = 0 ; j < n; j++) {
            if(i == t[j]) {
                flag = 0;
                break;
            }
            
        }
        if (flag) {
            cout << i << endl;
            break;
        }

    }
    
}
