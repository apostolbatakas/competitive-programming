// 3rd attempt --> O(nlogn)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int total = 0;
    int n;
    cin >> n;
    
    vector<int> coin(n); // Learn about how to define a vector when you know how many elements will have
    
    for (int i = 0; i < n; i++) {
        cin >> coin[i];     // When you know the vector size you can take elements like an array, and they is no need to use .push_back()
        total += coin[i];
    }
    
    sort(coin.begin(), coin.end(), greater<int>());    // Learn about sorting a vector, and how to sorting --> ascending and descending
    
    int count = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += coin[i];
        count++;
        
        if (sum > total / 2) {
            break;
        }
    }
    cout << count << '\n';
}

// 1st attempt  --> O(n^2)

/*#include <iostream>
using namespace std;

int sumArray(int coin[100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += coin[i];
    }
    return sum;
}

int main() {
    int n, sum = 0, count = 0;
    int coin[100];
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    
    while (sum <= sumArray(coin, n)) {
        int max = -1;
        int index = -1;
        
        for (int i = 0; i < n; i++) {
            if (max < coin[i]) {
                max = coin[i];
                index = i;
            }
        }
        coin[index] = 0;
        sum += max;
        count++;
    }
    cout << count << endl;
} */

// 2nd attempt --> O(n^2)

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    vector<int> coin;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> m;
        
        coin.push_back(m);
    }
    
    sort(coin.begin(), coin.end());
    
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        sum += coin[n - i - 1];
        count++;
        int sumArray = 0;
        
        for (int j = 0; j < n - i - 1; j++) {
            sumArray += coin[j];
        }
        
        if(sum > sumArray) {
            break;
        }
    }
    cout << count << endl;
} */
