class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump=0,currjump=0,i=0;
        int n= nums.size();
        if(n<=1)
            return true;
        while(currjump < (n-1))
        {
            if(i > n-1)
                break;
            
            maxjump = max(maxjump,i+nums[i]);
            if(i == currjump)
            {
                currjump = maxjump;
                
            }
            i++;
        }
        
        if(currjump >= (n-1))
            return true;
        
        return false;
    }
};