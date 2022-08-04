class Solution {
public:
    double pow_until(double x, long n)
    {
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n<0) return pow_until(1/x,-n);
        
        double res= pow_until(x*x,n/2);
        if(n%2)
            res *=x;
        return res;
    }
    double myPow(double x, int n) {
       return pow_until(x,n);
    }
};