#include <iostream>
#include <cctype>  // Needed in order to use tolower()
using namespace std;

int main() {
    string s1, s2;
    
    cin >> s1 >> s2;
    
    for (int i = 0; i < s1.size(); i++) {  // Loop through each character of the strings
        s1[i] = tolower(s1[i]);  // Convert both i-th character to lowercase
        s2[i] = tolower(s2[i]);
        
        if (s1[i] < s2[i]) {  // Compare current characters
            cout << -1 << endl;
            return 0;
        }
        else if (s1[i] > s2[i]) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;  // If we finished the loop without finding any difference, then the strings are equal
}
