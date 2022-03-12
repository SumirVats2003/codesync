#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	vector<int> answer[nums.size()];

	for(int i=0; i<nums.size(); i++) {
		int prd = 1;
		for (int j=0; j<nums.size(); j++) {
			if(j!=i) {
				prd *= nums[j];
			}
		}
		answer[i] = prd;
	}
	return answer;
}

int main() {
	vector<int> a = {1,2,3};
	vector<int> arr = productExceptSelf(a);
	for (int i=0; i<arr.size(); i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
