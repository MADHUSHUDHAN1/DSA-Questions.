class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 0)
            return 0;
        if(n == 1 || n== 2)
            return n;
        
        int prevW = 2;
        int prev2W  =1;
        for(int i=2; i<n; i++)
        {
            int allW = prevW+prev2W;
            prev2W = prevW;
            prevW = allW;
        }
        return prevW;
    }
};