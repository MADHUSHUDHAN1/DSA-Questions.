class Solution {
public:
    int jump(vector<int>& nums) {
      int maxjump=0,currjump=0,i=0,jumps=0;
        int n= nums.size();
        
        if(n ==1)
            return jumps;
        
        while(currjump < (n-1))
        {
            maxjump = max(maxjump,i+nums[i]);
            if(i == currjump)
            {
                currjump = maxjump;
                jumps++;
            }
            i++;
        }
        return jumps;
    }
};