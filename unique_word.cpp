#include <iostream>


using namespace std;

bool uniq_func(const string& w) {
	//loop through the string while i is less than length of w - 1
	for (int i = 0; i < w.length() - 1; i++) {
		//second for loop j starts at the index after i 
		//if w[i] is at index 0 w[j] is at index 1
		for (int j = i + 1; j < w.length(); j++) {
			//compare the each elements in each index to see if they are the same
			if (w[i] == w[j]) {
				return false;
			}
		}
	}
	return true;
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
