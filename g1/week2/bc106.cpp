#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<ll> arr(n);
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	ll sum = 0;
	for (int x:arr) {
		sum += x;
	}
	cout << sum << "\n";
	return 0;
}
