#include <iostream>

using namespace std;

int power(int b, int e) { // Returns 10^j
    int product = 1;
    for(int i = 0; i < e; i++) {
        product *= b;
    }
    return product;
}

int main() {
    int t, n;
    int a[5];
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> n;
        
        int j = 0;
        
        while(n > 0) {
            
            a[j] = (n % 10) * power(10, j);
            n /= 10;                 // Slicing down the number from the least significant digit to the most significant one
            j++;                     // Increasing 1 by 1 the exponent
        }
        
        int count = 0;
        for(int k = 0; k < j; k++) {  // Find how many array elements are not 0
            if (a[k] != 0) {
                count ++;
            }
        }
        cout << count << endl;
        
        for (int l = 0; l < j; l++) { // Print the answers that are not 0
            if (a[l] != 0) {
                cout << a[l] << " ";
            }
        }
        cout << endl;
    }
}

