#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        vector<string> city(n);
        
        for (int i = 0; i < n; i++) {
            cin >> city[i];
        }
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 0; j < i; j++) {
                if (city[i] == city[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                count++;
            }
        }
        cout << count << "\n";
    }
}
