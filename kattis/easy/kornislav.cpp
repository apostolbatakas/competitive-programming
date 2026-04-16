#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int seg[4];
    
    cin >> seg[0] >> seg[1] >> seg[2] >> seg[3];
    
    sort(seg, seg + 4);
    
    cout << seg[0] * seg[2] << endl;
}
