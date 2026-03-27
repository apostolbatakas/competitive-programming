#include <iostream>

using namespace std;

int main() {
    int r, c, zr, zc;
    
    string s;
    
    cin >> r >> c >> zr >> zc;
    
    for (int i = 0; i < r; i++) { // String input r(row) times.
        cin >> s;
        
        for (int l = 0; l < zr; l++) { // Repeating each new string zr times.
            
            for (int j = 0; j < c; j++) { // Each character in the string.
                
                for (int k = 0; k < zc; k++) { // Repeating each letter zc times.
                    cout << s[j];
                }
            }
            cout << endl;
        }
    }
    
}

