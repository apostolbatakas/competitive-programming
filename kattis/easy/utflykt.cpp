#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    long long t[300000];
    
    cin >> n;
    
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    
    sort(t, t + n);
    
    // Prefix sums
    
    long long prefix[300000];
    prefix[0] = t[0];
    
    for (int j = 1; j < n; j++) {
        prefix[j] = prefix[j - 1] + t[j];
    }
    
    long long ans = 1e18;
    
    
    for (int l = 0; l < n; l++) {
        
        long long left = (l + 1) * t[l] - prefix[l];
        
        
        long long right = (n - l - 1) * t[n - 1] - (prefix[n - 1] - prefix[l]);
        
        
        ans = min(ans, left + right);
    }
    
    cout << ans << endl;
    
}