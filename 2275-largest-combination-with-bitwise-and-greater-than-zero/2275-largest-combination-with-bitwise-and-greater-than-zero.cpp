class Solution {
public:
    int largestCombination(vector<int>& candidates) {
    vector<int> arr(32,0);
        for(int i=0; i<candidates.size(); i++)
        {
            int temp = 31;
            while(candidates[i]>0)
            {
                arr[temp] += candidates[i]%2;
                candidates[i] /= 2;
                temp--;
            }
        }
        int ans =0;
        
        for(int i=0; i<32; i++)
        {
            ans = max(ans,arr[i]);
        } 
        return ans;
    }
};