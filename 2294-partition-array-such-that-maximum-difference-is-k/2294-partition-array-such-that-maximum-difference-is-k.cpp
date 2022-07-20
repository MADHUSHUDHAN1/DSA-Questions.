class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size()-1;
        //int start = 0;
       // int end = n;
        int count = 1;
        sort(nums.begin(),nums.end());
        // while(start<=end)
        // {
        //     if(nums[end]-nums[start] <= k)
        //     {
        //         count++;
        //         start = end+1;
        //         end = n;
        //     }
        //     else
        //     end--;
        // }
        int mx = nums[0];
        int mn = nums[0];
        for(auto a : nums)
        {
          mx = max(mx,a);
          mn = min(mn,a);
            if(mx-mn > k)
            {
                count++;
                mn=mx=a;
            }
        }
        return count;
    }
};