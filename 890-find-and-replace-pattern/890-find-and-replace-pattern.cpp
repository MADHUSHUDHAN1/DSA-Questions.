class Solution {
public:
    bool check(string w1 ,string w2)
    {
        unordered_map<char,char> mp;
        vector<bool> vis(26,false);
        for(int i=0; i<w1.size(); i++)
        {
            char c1 = w1[i], c2 = w2[i];
            if(mp[c1] && mp[c1] != c2)
                return false;
            if(!mp[c1] && vis[c2-'a'])
                return false;
            mp[c1] = c2;
            vis[c2-'a'] = true;
        
        }
        return true;
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
       for(string word: words)
       {
           if(check(word,pattern))
           {
               ans.push_back(word);
           }
       }
        return ans;
    }
};