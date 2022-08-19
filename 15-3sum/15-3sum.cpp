class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            int target = -nums[i];
            int front = i+1;
            int end = nums.size()-1;
            
            while(front < end)
            {
                int sum = nums[front] + nums[end];
                if(sum < target) front++;
                else if(sum > target) end--;
                else{
                    vector<int> tri = {nums[i],nums[front],nums[end]};
                    res.push_back(tri);
                    
                    while(front < end && nums[front] == tri[1])
                    {
                        front++;
                    }
                    while(front < end && nums[end] == tri[2])
                    {
                        end--;
                    }
                }
            }
            while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};