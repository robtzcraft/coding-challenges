/*
 *
 * Given and integer 'x', return 'true' if 'x' is a palindrome, and 'false' otherwise
 *
 * */

#include <string>
using namespace std;

class Solution {
	public:
		bool isPalindrome(int x) {

			string x_str = to_string(x);
			string y;

			for(int i = x_str.size() - 1; i >= 0; i--) {
				y.push_back(x_str.at(i));
			}

			if(z == y) {
				return true;
			} else {
				return false;
			}

		}
}
