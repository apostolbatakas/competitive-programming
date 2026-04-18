#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    vector<int> num;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> m;
        num.push_back(m);
    }
    int even = 0;
    int odd = 0;
    
    
    for (int i = 0 ; i < 3; i++) {
        if (num[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    
    if (even > odd) {
        for (int i = 0; i < num.size(); i++) {
            if (num[i] % 2 == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < num.size(); i++) {
            if (num[i] % 2 == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
