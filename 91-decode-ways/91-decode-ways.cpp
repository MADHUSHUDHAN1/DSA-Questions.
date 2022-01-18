class Solution {
public:
    int numDecodings(string s) 
    {
        vector<int> memo(s.size()+1,0);
        return solve(s,0,memo);
    }
    
    int solve(string s, int p,vector<int>& memo)
    {
        if(p >= s.size())
            return 1;
        if(s[p] == '0' || s.size()==0)
            return 0;
        if(p == s.size()-1)
            return 1;
        if(memo[p]>0)
            return memo[p];
        
        string b = s.substr(p,2);
        int way1 = solve(s,p+1,memo);
        int way2=0;
        if(stoi(b)<=26 && stoi(b)>0)
        {
            way2 =solve(s,p+2,memo);
        }
        memo[p] = way1+way2;
        return  memo[p];
        
    }
};