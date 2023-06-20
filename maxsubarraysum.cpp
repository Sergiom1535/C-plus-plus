#include <iostream>
#include <unordered_map>
//dictionary header
#include <map>
#include <string>
#include <algorithm>

using namespace std;
int findMaxSubarraySum(const std::vector<int>& arr) {
	int maxSum = INT_MIN;
	int currentSum = 0;

	for (int i = 0; i < arr.size(); i++) {
		currentSum += arr[i];

		if (currentSum < 0) {
			currentSum = 0;
		}
		else if (currentSum > maxSum) {
			maxSum = currentSum;
		}
	}

	return maxSum;
}


int main() {
	int n;
	cin >> n ;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int values;
		cin >> values;
		arr.push_back(values);
		int result = findMaxSubarraySum(arr);
		cout << result;
	}
	
	return 0;
}
