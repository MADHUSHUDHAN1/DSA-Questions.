class Solution {
public:
    int rob1(vector<int> nums,vector<int>& dp,int i)
    {
        if(i>= nums.size())
            return 0;
        if(dp[i] != -1)
            return dp[i];
        return dp[i] = max(rob1(nums,dp,i+1),nums[i]+rob1(nums,dp,i+2));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return rob1(nums,dp,0);
    }
};