class Solution {
public:
    vector<vector<int>> ans;
    bool solve(int ind,vector<int> &candidates, int target, vector<int> res)
    {
        if(target == 0)
        {
            ans.push_back(res);
            return true;
        }
        if(ind <0)
        {
            return false;
        }
        
        if(target-candidates[ind] >= 0)
        {
            res.push_back(candidates[ind]);
            solve(ind-1,candidates,target-candidates[ind],res);
            res.pop_back();
        }
        while(ind-1>=0 && candidates[ind] == candidates[ind-1])
        {
            ind--;
        }
        solve(ind-1,candidates,target,res);
        
        return false;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n = candidates.size();
        vector<int> res;
        solve(n-1,candidates,target,res);
        return ans;
    }
};