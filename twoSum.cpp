#include <iostream>
#include <unordered_map>
#include <utility>
//dictionary header
#include <map>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> twoSum(const vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				return make_pair(i, j);
			}
		}
	}
	return make_pair(-1, -1);
}


int main() {
	int s;
	cin >> s;
	int t;
	cin >> t;
	vector<int> nums(s);
	for (int i = 0; i < s; i++) {
		int num;
		cin >> num;
		nums[i] = num;
		twoSum(nums, t);
		
	}
	pair<int, int> result = twoSum(nums, t);
	if (result.first != -1 && result.second != -1) {
		cout << "Indices of the two numbers: " << result.first << " and " << result.second << endl;
	}
	else {
		cout << "No two numbers found that add up to the target." << endl;
	}

	
	return 0;
}
