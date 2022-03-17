#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int d,n;
	cin >> n >> d;
	vector<int> intial(n);
	vector<int> fin(n);
	for (int i=0; i<n; i++) {
		cin >> intial[i];
	}
	d = d%n;
	for(int i=d; i<n; i++) {
		fin[i-d] = intial[i];
	}
	for (int i=0; i<d; i++) {
		fin[i+n-d] = intial[i];
	}
	for (int i=0; i<n; i++) {
		cout << fin[i] << " ";
	}
	cout << "\n";
	return 0;
}
