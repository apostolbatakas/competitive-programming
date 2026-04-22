#include <iostream>

using namespace std;

int main() {
    int t, n;
    
    string s[100];
    
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }
        
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            bool found = false;
            
            for (int j = 0; j < i; j++) {
                if(s[i] == s[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                count++;
            }
        }
        cout << count << endl;
    }
}
