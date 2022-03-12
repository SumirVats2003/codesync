#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int esum, osum;
	for (int i=0; i<n; i+=2) {
		esum += arr[i];
	}
	for (int i=1; i<n; i+=2) {
		osum += arr[i];
	}
	if (esum>osum) 
		cout << (2*osum) << "\n";
	else 
		cout << (2*esum) << "\n";
	return 0;
}
