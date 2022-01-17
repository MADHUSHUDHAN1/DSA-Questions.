class Solution {
public:
    
    void solve(vector<int> nums,vector<int> res,int index,vector<vector<int>>& ans)
    {
          
                ans.push_back(res);
                
            
        
        for(int i=index; i<nums.size(); i++)
        {
           if(i==index || nums[i] != nums[i-1])
           {
                res.push_back(nums[i]);
            solve(nums,res,i+1,ans);
            res.pop_back();
           }
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
            vector<int> res;
        int index=0;
        solve(nums,res,index,ans);
        return ans;
    }
};