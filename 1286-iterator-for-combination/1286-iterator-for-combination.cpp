class CombinationIterator {
public:
    vector<string> com;
    int ptr;
    void util(string str,int n,int pos,int len,string res)
    {
        if(len == 0)
        {
            com.push_back(res);
            return;
        }
        if(pos>=n) return;
        
        res.push_back(str[pos]);
        util(str,n,pos+1,len-1,res);
        res.pop_back();
        util(str,n,pos+1,len,res);
        
    }
    CombinationIterator(string characters, int combinationLength) {
        util(characters,characters.size(),0,combinationLength,"");
        ptr =0;
    }
    
    string next() {
        return com[ptr++];
    }
    
    bool hasNext() {
        return ptr<com.size()?true:false;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */