#include <iostream>
//header to use a unordered_set
#include <unordered_set>
#include <string>

using namespace std;

bool uniq_func(const string& w) {
	//use a hash set
	unordered_set<char> myset;
	//loop through lenght of string w
	for (char c : w) {
		// check if c is in my set
		if (myset.count(c) > 0) {
			//c exist in my set
			return false;
		}
		//insert the char into my set and check for next char in string
		myset.insert(c);
	}return true;
}



int main() {
	string word1;
	string word2;
	cin >> word1;
	cin >> word2;
	cout <<"first word is: "<< uniq_func(word1)<<endl;
	cout << "second word is: " << uniq_func(word2) << endl;

	return 0;
}
