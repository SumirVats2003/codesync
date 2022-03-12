#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		set<int> s;
		for(int x:arr) {
			s.insert(x);
		}
		for(int x:s) {
			cout << x << " ";
		}
		cout << "\n";
	}
	return 0;
}
