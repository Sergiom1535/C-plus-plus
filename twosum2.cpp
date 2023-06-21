#include <iostream>
#include <unordered_map>
#include <utility>
//dictionary header
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

vector<pair<int, int>> twoSum(const vector<int>& nums, int target) {
	//if we want all pairs of indices we can create a vector
	vector<pair<int, int>> pairs;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				 pairs.push_back(make_pair(i, j));
			}
		}
	}
	return pairs;
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
	vector<pair<int, int>> results = twoSum(nums, t);
	if (!results.empty()) {
		cout << "Indices of the pairs that add up to the target:" << endl;
		for (const auto& result : results) {
			cout << result.first << " and " << result.second << endl;
		}
	}
	else {
		cout << "No pairs found that add up to the target." << endl;
	}


	
	return 0;
}
