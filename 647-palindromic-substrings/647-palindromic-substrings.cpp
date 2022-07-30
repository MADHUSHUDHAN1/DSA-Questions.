class Solution {
public:
    bool check(int i,int j,string s)
    {
        string str = s.substr(i,j-i+1);
        string str1 = str;
        reverse(str.begin(),str.end());
        if( str1 == str)
            return true;
        return false;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        vector<vector<bool>> dp(n,vector<bool> (n,false));
        for(int i=0; i<n; i++)
        {
            dp[i][i] = true;
        }
       
        int size=1;
      while(size< n)
      {
          for(int i=0; i<n-size; i++)
          {
              if(s[i] == s[i+size] )
              
              {if(size>1)
                 { if(dp[i+1][i+size-1]){
                      dp[i][i+size] = true;
                      count++;
                      }
                 }
               else
                   if(size==1)
                   {
dp[i][i+size]=(s[i]==s[i+size]);
                   count++;}
              }
              
                 
          }
          size++;
      }
        
        return count+n ;
    }
};