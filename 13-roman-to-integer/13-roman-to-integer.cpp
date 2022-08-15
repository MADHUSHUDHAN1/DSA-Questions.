class Solution {
public:
    int romanToInt(string s) {
         int res=0,ans=0,prev=0;
        int n = s.length();
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'I')
                res = 1;
            if(s[i] == 'V')
                res = 5;
            if(s[i] == 'X')
                res =10;
            if(s[i] == 'L')
                res = 50;
            if(s[i] == 'C')
                res = 100;
            if(s[i] == 'D')
                res = 500;
            if(s[i] == 'M')
                res = 1000;
            
            if(prev >= res)
                ans = ans + res;
            else 
                ans = ans + (res - 2*prev);
            
            prev =res;
        }
        return ans;
    }
};