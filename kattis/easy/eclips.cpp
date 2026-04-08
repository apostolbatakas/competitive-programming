#include <iostream>

using namespace std;

int main() {
    string s;
    bool found = false;
    
    while (cin >> s) {
    
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'e') {
                cout << s << " ";
                found = true;
                break;
            }
        }
    }
    
    if (!found) {
        cout << "oh noes" << endl;
    }
}
