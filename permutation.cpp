#include <iostream>
//header to use a unordered_set
#include <unordered_set>
#include <string>

using namespace std;

bool permutation_func(const string& w1, const string& w2) {
	//first thing to check is the lenght of the two strings
	//can't be permutable if they are different lenghts.
	//we can either use a hash set or a hash table to check if they are permutable
	if (w1.length() != w2.length()) {
		return false;
	}
	unordered_set<char> myset;

	for (char c : w1) {
		//add every char in string 1 to the set;
		myset.insert(c);
	}
	for (char c : w2) {
		if (myset.count(c) == 0) {
			return false;
		}
		myset.erase(c);
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
