#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n<3)
			cout << 0;
		else 
			cout << (10*(n-2)*(pow(3,n-3)));
		cout << "\n";
	}
	return 0;
}

