#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		vector<int> p(n);
		vector<int> s(n);
		for (int i=0; i<n; i++) {
			cin >> p[i] >> s[i];
		}
		for(int i=0; i<n; i++) {
			if(p[i] > 8) {
				s[i] = 0;
			}
		}
		for (int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(p[i] == p[j]) {
					int m = min(s[i], s[j]);
					if(s[i] == m) {
						s[i] = 0;
					}
					else {
						s[j] = 0;
					}
				}
			}
		}
		int sum = 0;
		for(int i=0; i<n; i++) {
			sum += s[i];
		}
		cout << sum << "\n";
	}
	return 0;
}

