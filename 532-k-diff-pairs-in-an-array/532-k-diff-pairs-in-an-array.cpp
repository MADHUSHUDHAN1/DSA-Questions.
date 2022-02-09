class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int cnt=0;
        for(auto i: nums)
            m[i]++;
        
        for(auto x: m)
        {
            if(k == 0)
            {
                if(x.second>1)
                    cnt++;
            }
            else if(m.find(x.first+k) != m.end())
                cnt++;
        }
        return cnt;
    }
};