#include <iostream>

using namespace std;

int main() {
    
    bool mod42[42] = {false};
    
    int n;
    
    for (int i = 0;  i < 10; i++) {
        cin >> n;
        mod42[n % 42] = true;
    }
    int count = 0;
    for (int j = 0; j < 42; j++) {
        if (mod42[j] == true) {
            count++;
        }
    }
    cout << count << "\n";
}
