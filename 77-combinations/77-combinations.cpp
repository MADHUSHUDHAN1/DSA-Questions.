class Solution {
public:
    vector<vector<int>> res;
    vector<int> curr;
    
    void recursion(int i,int n, int k)
    {
        if(i>n)
        {
            if(curr.size()==k)
                res.push_back(curr);
            
            return;
        }
        if(curr.size()==k)
        {
            res.push_back(curr);
            return;
            
        }
        for(int j=i; j<=n; j++)
        {
            curr.push_back(j);
            recursion(j+1,n,k);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
       recursion(1,n,k);
        return res;
    }
};