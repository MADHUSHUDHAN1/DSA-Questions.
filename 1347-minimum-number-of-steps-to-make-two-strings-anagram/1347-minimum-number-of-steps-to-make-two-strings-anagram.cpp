class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freqS(26,0);
        vector<int> freqT(26,0);
        
        for(int i=0; i<s.size(); i++)
        {
            freqS[s[i]-'a']++;
            freqT[t[i]-'a']++;
        }
        int count = 0;
        for(int i=0; i<26; i++)
        {
            if(freqS[i] > freqT[i])
            {
                count += freqS[i]-freqT[i];
            }
        }
        return count;
    }
};