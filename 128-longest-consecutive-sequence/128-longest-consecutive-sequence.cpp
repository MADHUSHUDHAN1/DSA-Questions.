class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        
        
        int ans = 0;
        
       // int next=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(st.find(nums[i]-1) != st.end())
            {
                continue;
            }
            int num = nums[i];
            int count = 0;
            while(st.find(num) != st.end())
            {
                count++;
                num++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};