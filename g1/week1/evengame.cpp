#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll arr[n];
		int sum=0;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			sum+=arr[i];
		}
		if(sum%2==0) {
			cout << "1\n";
		}
		else {
			cout << "2\n";
		}
	}
	return 0;
}

