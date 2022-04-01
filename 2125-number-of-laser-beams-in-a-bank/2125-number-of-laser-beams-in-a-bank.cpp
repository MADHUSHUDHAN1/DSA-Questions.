class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int res=0, prev=0;
        
        for(auto & r: bank){
            int cnt = count(begin(r),end(r),'1');
            if(cnt != 0)
            {
                res += cnt* prev;
                prev = cnt;
            }
        }    
        return res;
        
       
    }
};