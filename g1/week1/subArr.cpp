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
	int n;
	cout << "Enter array length: ";
	cin >> n;
	int arr[n];

	for (int i=0; i<n; i++) {
		cout << "Enter array element at index " << i << ": ";
		cin >> arr[i];
	}

	cout << "All the subarrays for this array are: \n";
	subArr(arr, n);

	return 0;
}

