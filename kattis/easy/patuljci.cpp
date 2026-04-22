#include <iostream>

using namespace std;

int main() {
    
    int a[9], sum = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    int target = sum - 100;
    int indx1 = -1;
    int indx2 = -1;
    
    
    for (int i = 0; i < 8; i++) {
        bool found = false;
        for (int j = i + 1; j < 9; j++) {
            if(a[i] + a[j] == target) {
                indx1 = i;
                indx2 = j;
                found = true;
                break;
            }
        }
        if(found) {
            break;
        }   
    }
    
    for (int k = 0; k < 9; k++) {
        if(indx1 != k && indx2 != k) {
            cout << a[k] << endl;
        }
    }
    
}
