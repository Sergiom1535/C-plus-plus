#include <iostream>
#include <unordered_map>
//dictionary header
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int sherlockandanagrams(string s) {
    int n = s.length();
    unordered_map<string, int> frequency;

    for (int len = 1; len < n; len++) {
        for (int i = 0; i <= n - len; i++) {
            string substring = s.substr(i, len);
            sort(substring.begin(), substring.end()); // Sort the substring

            // Update the frequency count
            frequency[substring]++;
        }
    }

    int count = 0;
    for (auto it = frequency.begin(); it != frequency.end(); it++) {
        int occurrences = it->second;
        count += (occurrences * (occurrences - 1)) / 2; // Calculate the count of anagram pairs
    }

    return count;
}

int main() {
	//the number of queries
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		//get the strings for the number of queries entered
		string s;
		cin >> s;
		int result =sherlockandanagrams(s);
		cout << result << endl;
	}
		

	return 0;
}
