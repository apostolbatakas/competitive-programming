#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            nums.push_back(s[i] - '0');
        }
    }
    
    sort(nums.begin(), nums.end());
    
    for (int j = 0; j < nums.size(); j++) {
        cout << nums[j];
        
        if (j < nums.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;
}
