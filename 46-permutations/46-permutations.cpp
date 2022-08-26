class Solution {
public:
    void solve(vector<int> &nums, vector<int> &vis,vector<int> res, vector<vector<int>> &ans)
    {
        if(res.size() == nums.size())
        {
            ans.push_back(res);
            return;
        }
        
        for(int i=0; i<nums.size(); i++){
          if(vis[i] == 0)
          {
             vis[i] = 1;
              res.push_back(nums[i]);
              solve(nums,vis,res,ans);
              vis[i] = 0;
              res.pop_back();
          }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> vis(n,0);
        vector<vector<int>> ans;
        vector<int> res;
        solve(nums,vis,res,ans);
        return ans;
    }
};