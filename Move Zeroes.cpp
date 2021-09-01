// Question URL - https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v,v1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                v.push_back(nums[i]);
            }else{
                v1.push_back(nums[i]);
            }
        }
        
        for(auto it: v){
            v1.push_back(it);
        }
        nums.clear();
        for(auto it: v1){
           nums.push_back(it);
        }
        
        
    }
};
