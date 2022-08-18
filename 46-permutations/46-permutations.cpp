class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int> &nums,vector<int> &visited, vector<int> ans)
    {
        if(nums.size() == ans.size())
        {
            res.push_back(ans);
            return;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(visited[i] == 0)
            {
                ans.push_back(nums[i]);
                visited[i] = 1;
                solve(nums,visited,ans);
                ans.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> visited(nums.size(),0);
        vector<int> ans;
        solve(nums,visited,ans);
        return res;
    }
};