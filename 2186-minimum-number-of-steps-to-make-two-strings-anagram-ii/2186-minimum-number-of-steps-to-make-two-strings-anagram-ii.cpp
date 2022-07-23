class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp1;
        int ans =0;
        for(int i=0; i<s.size(); i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            mp1[t[i]]--;
        }
        for(auto it:mp1)
        {
            ans += abs(it.second);
        }
        return ans;
    }
};