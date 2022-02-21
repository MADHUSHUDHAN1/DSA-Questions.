class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size();
        int maj;
        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for(auto m: map)
        {
            if(m.second > n/2)
            {
                maj = m.first;
            }
        }
        return maj;
    }
};