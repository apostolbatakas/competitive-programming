#include <iostream>

using namespace std;

int main() {
    int count = 0;
    
    string s;
    
    cin >> s;
        
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
                break;
            }
        }
    }
    if ((s.size() - count) % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
    
}