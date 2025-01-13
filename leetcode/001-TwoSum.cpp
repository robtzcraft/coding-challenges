/*
 * 	Given an array of integers 'nums' and an integer 'target', return indices of the
 * 	two numbers such that they add up to 'target'.
 *
 * 	e.g.    nums = {2,7,11,15}; target = 9; answer = [0,1]
 *
 * */

#include <vector>
#include <iostream>
using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			for(int i = 0; i < nums.size(); i++) {
				for(int j = 0; j < nums.size(); j++) {
					if(i == j) {
						continue;
					} else if((nums[i] + nums[j]) == target) {
						return {i,j};
					}
				}
			}
			return {};
		}
};

int main(){
	
	Solution solution;
	vector<int> nums = {2,7,11,15};
	int target = 9;

	vector<int> result = solution.twoSum(nums, target);
	cout << "[" << result[0] << "," << result[1] << "]" << endl; 
	
	return 0;
}
