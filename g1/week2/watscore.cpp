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
		for (int i=0; i<p.size(); i++) {
			if (p[i] > 8) {
				s.erase(s.begin() + i);
			}
		}
		int m=0;
		for (int i=0; i<p.size(); i++) {
			for (int j=i+1; j<p.size(); j++) {
				if (p[i] == p[j]) {
					m = min(s[i], s[j]);
				}
				vector<int>::iterator itr = std::find(p.begin(), p.end(), m);
				int ind = distance(s, itr);
				s.erase(remove(s.begin(), s.end(), ind), s.end());
				p.erase(remove(p.begin(), p.end(), m), p.end());
			}
		}
		int sum=0;
		for(int i=0; i<s.size(); i++) {
			sum+=s[i];
		}
		cout << sum << "\n";
	}
	return 0;
}

