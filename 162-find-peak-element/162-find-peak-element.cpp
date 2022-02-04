class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int j= nums.size()-1;
        while(i<j)
        {
            int mid =(i+j)/2;
            int mid2 = mid+1;
            if(nums[mid] < nums[mid2])
                i=mid2;
            else
                j= mid;
        }
        return i;
    }
};