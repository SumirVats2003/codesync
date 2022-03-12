#include<bits/stdc++.h>
#define ll long long
using namespace std;

void subSeq(int a[], int n) {

}

int main() {
	int n;
	cout << "Enter araay length: ";
	cin>>n;
	int arr[n];

	for (int i=0; i<n; i++) {
		cout << "Enter element at index " << i << ": ";
		cin >> arr[i];
	}
	
	subSeq(arr, n);
	return 0;
}

