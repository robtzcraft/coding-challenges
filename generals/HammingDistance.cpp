
/*
 *
 * The Hamming distance between two strings is the number of places in which the two
 * strings differ. For example, suppose n = 4 and we consider the words "jazz" and
 * "fizz". The Hamming Distance between these two strings is 2. If the Hamming 
 * distance between two strings is 0, then they must be the same.
 *
 * */

#include <iostream>
using namespace std;

class Solution {
	public:
		void hammingDistance(string w_1, string w_2) {

			int counter = 0;

			if(w_1.size() == w_2.size()){
				for(int i = 0; i < w_1.size(); i++) {
					if(w_1[i] != w_2[i]) {
						counter++;
					}
				}
				cout << "Input_1 = [" << w_1 << "]" << endl;
				cout << "Input_2 = [" << w_2 << "]" << endl;
				cout << "Hamming Distance: " << counter << endl;
			} else {
				cout << "Input[1].length != Input[2].length" << endl;
			}
		}
};

int main() {

	Solution solution;

	string word = "0011011011100011";
	string word_2 = "1010011000110011";

	solution.hammingDistance(word, word_2);

	return 0;
}
