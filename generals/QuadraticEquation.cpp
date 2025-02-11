
#include<cmath>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
	public:
		vector<float> quadraticEquation(float a, float b, float c) {
			
			vector<float> results (2);

			float x_a = (-b - sqrt(pow( b, 2 ) - 4*(a*c))) / (2*a);
			float x_b = (-b + sqrt(pow( b, 2 ) - 4*(a*c))) / (2*a);

			results[0] = x_a;
			results[1] = x_b;

			return results;
		}
};

int main() {
	
	Solution solution;
	vector<float> x (2);
	x = solution.quadraticEquation(1,4,5);
	cout << "[" << x[0] << "," << x[1] << "]" << endl;

	return 0;
}
