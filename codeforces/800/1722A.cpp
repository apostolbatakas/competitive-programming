#include <iostream>

using namespace std;

int main() {
    
    int t, n;
    cin >> t;
    string s;
    
    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        
        for (int k = 0; k < 4; k++) {
            for (int l = k + 1; l < 5; l++) {
                if (s[k] > s[l]) {
                    char temp = s[k];
                    s[k] = s[l];
                    s[l] = temp;
                }
            }
        }
        
        if(s == "Timru") {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}

}
