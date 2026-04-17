#include <iostream>

using namespace std;

int main() {
    int upper = 0, lower = 0;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {  // Compare based on ASCII values
            upper++;
        }
        if(s[i] >= 97 && s[i] <= 122) {
            lower++;
        }
    }
    
    if (upper > lower) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] >= 97 && s[j] <= 122) {
                s[j] -= 32;      // uppercase = lowercase - 32
            }
        }
    }
    else {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] >= 65 && s[j] <= 90) {
                s[j] += 32;     // lowercase = uppercase + 32
            }
        }
    }
    cout << s << endl;
}
