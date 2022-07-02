class Solution {
public:
    int f(int ind,vector<int> &nums, vector<int> &dp)
    {
        if(ind == 0)
            return nums[0];
        if(ind < 0)
        {
            return 0;
        }
        if(dp[ind] != -1)
            return dp[ind];
        
        int take = nums[ind] + f(ind-2,nums,dp);
        int notTake = 0+f(ind-1,nums,dp);
        return dp[ind] = max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        dp[0] = nums[0];
       // dp[1] = nums[1];
        for(int i=1; i<n; i++)
        {
            int take = nums[i];
            if(i>1)
                take += dp[i-2];
            int notTake = 0 + dp[i-1];
            dp[i] = max(take,notTake);
        }
        return dp[n-1];
    }
};