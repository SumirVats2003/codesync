#include<bits/stdc++.h>
#define ll long long
using namespace std;

// Merge two sorted arrays

vector<int> mergeVec(vector<int>& a, vector<int>& b, int aSize, int bSize) {
	vector<int> result;
	int i;
	for(i=0; i<aSize; i++) {
		result.push_back(a[i]);
	}
	for(i=0; i<bSize; i++) {
		result.push_back(b[i]);
	}
	return result;
}

int main() {
	vector<int> x = {1,2,3};
	vector<int> y = {7,8,9};
	vector<int> m = mergeVec(x,y,3,3);
	for(int i=0; i<m.size(); i++) {
		cout << m[i] << endl;
	}
	
	return 0;
}

