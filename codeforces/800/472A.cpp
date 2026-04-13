#include <iostream>

using namespace std;

int main () {

	int n;
	cin >> n;
	
	if (n % 2 == 0) {
		cout << 4 << " " << n - 4 << endl; // even + even = even
	}
	else {
		cout << 9 << " " << n - 9 << endl; // odd + even = odd
	}
}
