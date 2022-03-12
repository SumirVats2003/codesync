#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		int people = n+1;
		if(x <= (y*people))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
}
