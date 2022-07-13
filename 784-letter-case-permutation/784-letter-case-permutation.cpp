class Solution {
public:
    set<string> ans;
    void util(string s, int n, int pos, string res)
    {
        if(n == 0)
        {
            ans.insert(res);
            return;
        }
        if(pos>=s.size()) return;
        
        if(isalpha(s[pos]))
        {
            if(isupper(s[pos]))
            {
                res.push_back(tolower(s[pos]));
            }
            else{
                res.push_back(toupper(s[pos]));
            }
        }
        else{
            res.push_back(s[pos]);
        }
        util(s,n-1,pos+1,res);
        res.pop_back();
        res.push_back(s[pos]);
        util(s,n-1,pos+1,res);
    }
    vector<string> letterCasePermutation(string s) {
        
        util(s,s.size(),0,"");
        vector<string> res;
        set<string>::iterator itr;
        for(itr =ans.begin(); itr != ans.end(); itr++)
        {
            res.push_back(*itr);
        }
        return res;
    }
};