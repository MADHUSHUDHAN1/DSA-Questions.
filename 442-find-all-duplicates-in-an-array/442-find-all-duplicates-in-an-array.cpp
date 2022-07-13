class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
       //int count =0;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
               // count++;
               
                ans.push_back(nums[i]);
                 i+=1;
            }
        }
        return ans;
        
    }
};