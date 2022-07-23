class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp1,mp2;
        int ans =0;
        for(int i=0; i<s.size(); i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            mp2[t[i]]++;
        }
        for(auto& it : mp1)
        {
            if(mp2.find(it.first) != mp2.end())
            {
               ans += abs(it.second - mp2[it.first]) ;
                   mp2[it.first] = 0;
            }
            else{
                ans += it.second;
            }
        }
        for(auto it : mp2)
        {
            ans += it.second;
        }
        return ans;
    }
};