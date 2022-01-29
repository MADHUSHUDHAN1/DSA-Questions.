class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        int ele;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for(auto i : m)
        {
            if(i.second == 1)
                ele = i.first;
        }
        return ele;
    }
};