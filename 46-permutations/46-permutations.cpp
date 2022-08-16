class Solution {
public:
    void solve(vector<int> path, vector<int> &nums,vector<vector<int>> &ans,vector<int> & freq)
    {
        if(path.size() == nums.size())
        {
            ans.push_back(path);
            return;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(freq[i] == 0)
            {
                path.push_back(nums[i]);
                freq[i] = 1;
                solve(path,nums,ans,freq);
                freq[i] = 0;
                path.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        vector<int> freq(nums.size(),0);
        solve(path,nums,ans,freq);
        return ans;
    }
};