class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans(n);
        stack<pair<int,int>>st;
        st.push({nums[n-1],n-1});
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top().first<=nums[i]){
                st.pop();
            }
            if(st.empty())
                ans[i]=0;
            else{
                ans[i]=st.top().second-i;
            }
            st.push({nums[i],i});
        }
        return ans;
    }
};