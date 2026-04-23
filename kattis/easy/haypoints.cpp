#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    unordered_map<string, int> dict;

    for (int i = 0; i < m; i++) {
        string word;
        int value;
        cin >> word >> value;

        dict[word] = value;
    }

    for (int i = 0; i < n; i++) {
        string s;
        int sum = 0;

        while (cin >> s && s != ".") {
            
            auto it = dict.find(s);

            if (it != dict.end()) { 
                sum += it->second;
            }
        }
        cout << sum << "\n";
    }
}
