#include <iostream>
//header to use a unordered_set
#include <unordered_set>
//header to use a hash map
#include <unordered_map>
#include <string>

using namespace std;

bool permutation_func(const string& w1, const string& w2) {
	//hash table
	//check strings length
	if (w1.length() != w2.length()) {
		return false;
	}
	//declare our hash map
	unordered_map<char, int> mycount;

	//increments the char count in string w1
	for (char c : w1) {
		mycount[c]++;
	}
	for (char c : w2) {
		//if char c is not found in our hash map or the count is already 0 return false 
		if (mycount.find(c) == mycount.end() || mycount[c] == 0) {
			return false;
		}
		mycount[c]--;
	}
	return true;

};



int main() {
	string word1;
	string word2;
	cin >> word1;
	cin >> word2;
	cout << permutation_func(word1, word2);

	return 0;
}
