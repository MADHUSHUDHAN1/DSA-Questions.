class Solution {
public:
    void solve(int ind, string s, vector<string> path, vector<vector<string>> &ans)
    {
        if(ind == s.size())
        {
            ans.push_back(path);
            return;
        }
        
        for(int i=ind; i<s.size(); i++)
        {
            if(isPalindrome(s.substr(ind,i-ind+1)))
            {
                path.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,path,ans);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s)
    {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(s[i++] != s[j--])
            {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        
        solve(0,s,path,ans);
        return ans;
    }
};