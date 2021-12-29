class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    vector<string> res;
        set<string> fi;
    
    for(int i=0; i<words.size(); i++)
    {
        string s = words[i];
        string ans="";
        for(int j=0; j<s.size(); j++)
        {
            ans += arr[s[j]- 'a'];
        }
        res.push_back(ans);
    }
        for(int i=0; i<res.size(); i++)
        {
            fi.insert(res[i]);
        }
        
        return fi.size();
    }
};