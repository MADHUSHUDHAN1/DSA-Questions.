class Solution {
public:
    int tribonacci(int n) {
        if(n<2)
            return n;
        // int dp[n+1];
        // dp[0] = 0;
        // dp[1] = 1;
        // dp[2] =1;
        int a=0,b=1,c=1;
        int d = a+b+c;
        // for(int i=3; i<=n;i++)
        // {
        //     dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        // }
        while(n>2)
        {
            d = a+b+c;
            a=b;
            b=c;
            c=d;
            n--;
        }
        return c;
    }
};