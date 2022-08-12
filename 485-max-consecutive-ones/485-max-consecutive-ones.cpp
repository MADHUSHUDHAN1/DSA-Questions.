class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      
        int mx = 0;
        int sum =0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                sum += nums[i];
                
            }
            else if(nums[i] == 0)
            {
                mx = max(mx,sum);
                sum =0;
            }
        }
        mx = max(mx,sum);
        return mx;
    }
};