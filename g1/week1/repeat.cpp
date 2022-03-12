#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k,s;
		cin>>n>>k>>s;
		int oddSum = (n*n);
		int num = ((s-oddSum))/((k-1));
		cout << num << "\n";
	}
	return 0;
}

