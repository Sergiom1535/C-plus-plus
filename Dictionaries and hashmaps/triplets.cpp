#include <iostream>
#include <unordered_map>
//dictionary header
#include <map>
#include <string>
#include <algorithm>

using namespace std;

long countingTriplets(vector<long> arr, long r) {
	long count = 0;
	//potential map used to keep track of the potential number of triplets
	unordered_map<long, long> potential;
	//counter map used to store the actual number of triplets found.
	unordered_map<long, long> counter;
	for (long num : arr) {
		if (num % r == 0) {
			long pre = num / r;
			if (counter.count(pre)) {
				count += counter[pre];
			}
			if (potential.count(pre)) {
				counter[num] += potential[pre];
			}
		}
		potential[num] += 1;
	}
	return count;

}

int main() {
	//get size of array
	long n;
	//get ratio
	long ratio;
	cin >> n >> ratio;
	vector <long> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << countingTriplets(arr, ratio);
	
		

	return 0;
}
