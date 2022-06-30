class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
       vector<int> ans;
        for(long long int i=1; i<nums.size(); i++)
        {
            nums[i] = nums[i]^nums[i-1];
        }
        for(long long int i=nums.size()-1; i>=0; i--)
        {
            ans.push_back(nums[i]^((int)pow(2,maximumBit)-1));
        }
        return ans;
    }
};