class Solution {
public:
    vector<vector<int>> ans;
    bool solve(int ind, vector<int>& candidates, int target,vector<int> &res)
    {
          if(target == 0)
           {
               ans.push_back(res);
               return true;
           }  
        if(ind<0)
        {
            return false;
        }
            
        
        solve(ind-1,candidates,target,res);
        if(target-candidates[ind]>=0){
            res.push_back(candidates[ind]);
        solve(ind,candidates,target-candidates[ind],res);
            res.pop_back();
        }
        return false;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        vector<int> res;
        solve(n-1,candidates,target,res);
        return ans;
    }
};