class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        int ans = -1;
        vector<int> postfix(n);
        prefix[0] = nums[0];
        postfix[n-1] = nums[n-1];
        for(int i=1; i<n; i++)
        {
            prefix[i] = nums[i] + prefix[i-1];
        }
        for(int i=n-2; i>=0; i--)
        {
            postfix[i] = nums[i] + postfix[i+1];
        }
        for(int i=0; i<n; i++)
        {
            if(prefix[i] == postfix[i])
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};