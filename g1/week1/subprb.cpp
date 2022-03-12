#include<bits/stdc++.h>
#define ll long long
using namespace std;

void subArr(int a[], int n) {
	for(int i=0; i<n; i++) {
		for (int j=i;j<n;j++) {
			for(int k=i;k<=j;k++) {
				cout << a[k] << " ";
			}
			cout << "\n";
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int i=1;
		int count = 1;
		while(count<=n) {
			cout << i << " ";
			i+=2;
			count++;
		}
	}
	return 0;
}

