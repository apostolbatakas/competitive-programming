#include <iostream>

using namespace std;

int main() {
    string s, t;
    int flag = 1;
    
    cin >> s >> t;
    
    if (s.size() != t.size()) {
        cout << "NO" << endl;
    }
    else {
        int j = s.size() - 1;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] != t[j]) {
                flag = 0;
            }
            j--;
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
