class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n =  queries.size();
        vector<int> ans(n);
       vector<int> prefix(arr.size());
        prefix[0] = arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            prefix[i] = prefix[i-1]^arr[i];
        }
        for(int i=0; i<n; i++)
        {int val =0;
            if(queries[i][0] != 0)
           val = prefix[queries[i][1]] ^ prefix[queries[i][0]-1];
            else
                val = prefix[queries[i][1]];
         
         ans[i] = val;
        }
                          return ans;
    }
};