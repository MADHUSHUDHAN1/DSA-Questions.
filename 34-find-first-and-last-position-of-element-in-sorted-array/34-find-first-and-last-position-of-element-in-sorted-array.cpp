class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int min=0;
        int max = nums.size()-1;
        int fstIndex=-1,sndIndex=-1;
        
        while(min <= max)
        {
            int mid = (min + max)/2;
            
            if(nums[mid] == target)
            {
                fstIndex = sndIndex = mid;
                break;
            }
            else if(nums[mid] < target)
            {
                min = mid+1;
            }
            else {
                max = mid-1;
            }
        }
        
        int i = fstIndex;
        
        while(++i < n && nums[i] == target)
            sndIndex++;
        
        i=fstIndex;
        while(--i >=0 && nums[i] == target)
            fstIndex--;
        
        ans.push_back(fstIndex);
        ans.push_back(sndIndex);
        
        return ans;
    }
};