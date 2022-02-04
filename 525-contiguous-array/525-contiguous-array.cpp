class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0,maxL=0;
        unordered_map<int,int> seen{{0,-1}};
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
                sum +=1;
            else 
                sum +=-1;
            if(seen.count(sum))
                maxL = max(maxL,i-seen[sum]);
            else 
                seen[sum] = i;
        }
        return maxL;
    }
};