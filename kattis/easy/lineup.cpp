#include <iostream>

using namespace std;

int main() {
    int n;
    string s[20];
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    bool inc = true;
    bool dec = true;
    
    
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            inc = false;
        }
        if (s[i] < s[i + 1]) {
            dec = false;
        }
        
    }
    
    if(inc) {
        cout << "INCREASING" << endl;
    }
    else if (dec) {
        cout << "DECREASING" << endl;
    }
    else {
        cout << "NEITHER" << endl;
    }
}
