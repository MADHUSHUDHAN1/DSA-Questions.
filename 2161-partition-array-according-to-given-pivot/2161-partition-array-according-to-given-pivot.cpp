class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       
        vector<int> lesP,greP;
        int countP = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < pivot)
            {
                lesP.push_back(nums[i]);
            }
            else if(nums[i] > pivot)
            {
                greP.push_back(nums[i]);
            }
            else
            {
                countP++;
            }
        }
        vector<int> ans(lesP);
        
        while(countP)
        {
            ans.push_back(pivot);
            countP--;
        }
        ans.insert(ans.end(),greP.begin(),greP.end());
        return ans;
        
    }
};