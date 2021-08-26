//Question Link - https://www.google.com/url?q=https://leetcode.com/problems/two-sum/&sa=D&source=editors&ust=1629897830638000&usg=AOvVaw3FqfvdavvXHppB242wpcX6
// My solution in O(N)


class Solution {
public:
      vector<int> twoSum(vector<int>& nums, int target) {
          
         // O(N) solution using hashing.
         unordered_map<int, int> hash;
	     vector<int> result;
	     for (int i = 0; i < nums.size(); i++) {
		 int numberToFind = target - nums[i];

		 if (hash.find(numberToFind) != hash.end()) {
			result.push_back(hash[numberToFind]);
			result.push_back(i);			
			return result;
		}
		hash[nums[i]] = i;
	}
	 return result;
            
    } 
    
};
