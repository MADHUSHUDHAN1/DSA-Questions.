class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        if(s.find(part) != string::npos){
        size_t p = -1;
        
        while((p=s.find(part)) != string::npos)
        {
            s.replace(p,part.size(),"");
        }
        }
        return s;
    }
};