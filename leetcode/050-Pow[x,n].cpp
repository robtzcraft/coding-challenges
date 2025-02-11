
/*
 * Implement pow(x,n), which calculates x raised to the power n (i.e., x^n).
 * */

#include<iostream>
using namespace std;

class Solution {
	public:
		double myPow(double x, int n) {
			
			double result = 1;

			if(n == 0) {
				return 1;
			} else if(n < 0) {
				for(int i = 0; i < (n * -1); i++) {
					result = result * x;
				}
				result = 1 / result;
			} else {
				for(int i = 0; i < n; i++) {
					result = result * x;
				}
			}
		
			return result;
		}
};

int main() {
	Solution solution;
	
	double x = solution.myPow(2,-2);
	double y = solution.myPow(20,3);
	double z = solution.myPow(5.2,4);

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	return 0;
}
