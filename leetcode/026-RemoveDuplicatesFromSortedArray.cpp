/*
 * Given an integer array nums sorted in non-decreasing order, remove the duplicates
 * in-place such that each unique element appears only once. The relative order of
 * the elements should be kept the same. Then return the number of unique elements
 * in nums.
 * */

#include <vector>
#include <iostream>
using namespace std;

class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {
			
			vector<string> nums_array (nums.size());
			int counter = nums.size();

			for(int i = 0; i < nums.size(); i++) {
				nums_array[i] = to_string(nums[i]);
			}

			bool duplicate = true;
			
			while(duplicate == true) {
				for(int i=0; i < nums.size(); i++) {
					if (nums_array[i] != "_" && nums_array[i] == nums_array[i+1]) {
						nums_array.erase(nums_array.begin()+i);
						nums_array.push_back("_");
						counter--;
						duplicate = true;
						break;
					} else {
						duplicate = false;
					}
				}
			}

			return counter;
		}
};

int main(){
	
	// Custom judge
	
	int[] nums = [...];
	int[] expectedNums = [...];

	int k = removeDuplicates(nums);

	assert k == expectedNums.length;
	for(int i = 0; i < k; i++) {
		assert nums[i] == expectedNums[i];
	}

	return 0;
}

// Tests
//
// [1,1,2] -> [1,2,_]
