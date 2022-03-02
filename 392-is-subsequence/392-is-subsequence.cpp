class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0,cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=k; j<t.size(); j++)
            {
                if(s[i] == t[j])
                {
                    k = j+1;
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == s.size())
            return true;
        return false;
    }
};