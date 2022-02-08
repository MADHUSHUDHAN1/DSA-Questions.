class Solution {
public:
    int count(int n)
    {
        int c=0;
        while(n)
        {
            c++;
            n/=10;
        }
        return c;
    }
    int digitSum(int n)
    {
        int sum=0;
        while(n)
        {
            sum += n%10;
            n /=10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(count(num)==0 || count(num) == 1)
            return num;
        while(count(num)!= 1)
        {
            num = digitSum(num);
        }
        return num;
    }
};