class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permuteRecursive(nums,0,res);
        return res;
    }
    
    void permuteRecursive(vector<int> nums,int i,vector<vector<int>>& res)
    {
        if(i == nums.size())
        {
            res.push_back(nums);
        }
        else {
            for(int j=i; j<nums.size(); j++)
            {
                swap(nums[i],nums[j]);
                permuteRecursive(nums,i+1,res);
            }
        }
    }
    
};