//Question URL - https://leetcode.com/problems/majority-element/

class Solution {
public:
     map<int , int> mp;
    int majorityElement(vector<int>& nums) {
       
        
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        int x;
        for(auto it: mp){
            if(it.second>(nums.size())/2){
               x =  it.first;
                break;
            }
        }
      return x;
    }
    
};
