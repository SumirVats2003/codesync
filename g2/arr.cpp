#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int m = 0; // max
	int index;
	int count;
	for(int i=0; i<n; i++) {
		count = 0;
		for(int j=i; j<n; j++) {
			if(arr[j] == arr[i]) {
				count++;
			}
		}
		if (count > m) {
			m = count;
			index = i;
		}
	}
	cout << index << "\n";
	return 0;
}

