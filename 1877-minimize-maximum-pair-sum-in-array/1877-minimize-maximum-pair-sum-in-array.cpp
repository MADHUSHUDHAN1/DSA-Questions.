class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0;
        int j = nums.size()-1;
        sort(nums.begin(),nums.end());
        int maxSum = 0;
        while(i<j)
        {
            maxSum = max(maxSum,nums[i]+nums[j]);
            i++;
            j--;
        }
        return maxSum;
    }
};