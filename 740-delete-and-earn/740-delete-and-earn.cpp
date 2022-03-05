class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> values(n,0);
        
        for(auto num: nums)
        {
            values[num] += num;
        }
        
        int take =0, skip=0;
        for(int i=0; i<n; i++)
        {
            int takei = skip + values[i];
            int skipi = max(take,skip);
            
            take = takei;
            skip = skipi;
        }
        return max(take,skip);
    }
};