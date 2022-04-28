// Write the code to print all subsets of an array using recurrsion and DP.

//creating a 2d vector which will store all the subsets in it.
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(vector<int> &subset, int i, vector<int> &nums) {

	if(i==nums.size()){
		subsets.push_back(subset);
		return;
	}
	// ith element not in subset
	generate(subset, i + 1, nums);

	// its element in subset
	subset.push_back(nums[i]);
	generate(subset, i + 1, nums);

	//now we are gonna backtrack and pass the same value to previous call as it was passes before
	subset.pop_back();
}


int main() {
	//function me jo nums array h usko main function me bna rhe h
	int n;
	cin >> n;
	vector<int> nums(n);

	// nums vector me values input karva rhe h
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	vector<int> empty;
	generate(empty, 0, nums);
	for (auto subset : subsets) {
		for (auto ele : subset) {
			cout << ele;
		}
		cout << endl;
	}
}