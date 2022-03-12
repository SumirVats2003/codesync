#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int k;
		cin >> k;
		// I need the remainder
		int quotient = 52/k;
		int rem = 52 - (quotient*k);
		cout << rem << "\n";
	}
	return 0;
}

