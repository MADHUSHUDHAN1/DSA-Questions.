class Solution {
public:
    void solve(vector<int> &nums,int ind, vector<int> ans, vector<vector<int>> &res)
    {
        if(ind == nums.size())
        {
            res.push_back(ans);
            return;
        }
        
        ans.push_back(nums[ind]);
        solve(nums,ind+1,ans,res);
        ans.pop_back();
        solve(nums,ind+1,ans,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        vector<vector<int>> res;
        solve(nums,0,ans,res);
        return res;
    }
};