#include <iostream>

using namespace std;

int main() {
    
    int n, w, h, l;
    cin >> n >> w >> h;
    
    int dia = w * w + h * h; // w^2 + h^2 = diagonal^2
    
    for (int i = 0; i < n; i++) {
        cin >> l;
        
        if (l * l <= dia) {   // We can use the <cmath> library with the function: sqrt(). For precision and dealing only with integers we prefer this.
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
}
