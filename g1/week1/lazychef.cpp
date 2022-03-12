#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, m ,d;
		cin >> x >> m >> d;
		int t1 = m*x;
		int t2 = x+d;
		if(t1<t2) {
			cout << t1 << "\n";
		}
		else {
			cout << t2 << "\n";
		}
	}
	return 0;
}
