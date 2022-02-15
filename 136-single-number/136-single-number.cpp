class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        int x;
        for(auto m: map)
        {
            if(m.second == 1)
            {
                x= m.first;
                break;
            }
        }
        return x;
    }
};