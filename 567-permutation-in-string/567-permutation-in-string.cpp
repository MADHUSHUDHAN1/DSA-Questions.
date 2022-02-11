class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int map[26] ={0};
        for(char c: s1)
            map[c-'a']++;
        
        int i=0,j=0;
        int n=s1.size();
        while(j<s2.size())
        {
            if(map[s2.at(j++) - 'a']-- > 0)
                n--;
            if(n == 0)
                return true;
            if(j-i == s1.size() && map[s2.at(i++)-'a']++ >= 0)
                n++;
        }
        return false;
    }
};