/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
let twoSum = (nums, target) => {
  for(let i=0; i < nums.length; i++){
    for(let j=0; j < nums.length; j++){
      if (i == j){
        continue
      }else if((nums[i] + nums[j]) === target){
        return [i,j]
      }            
    }
  }
}


// Tests
// twoSum([2,7, 11, 15], 9);		Passed
// twoSum([3,2,4], 6);			Passed
// twoSum([3,3], 6);			Passed
