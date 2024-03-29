class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int k =0;
        int p=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[p-1])
            {
                continue;
            }
            else{
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};