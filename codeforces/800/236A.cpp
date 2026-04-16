#include <iostream>

using namespace std;

int main() {
    int count = 0;
    bool l[26] = {0};
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        
        if (!l[s[i] - 'a']) {
            l[s[i] - 'a'] = true;
            count++;
        }
    }
    
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}
