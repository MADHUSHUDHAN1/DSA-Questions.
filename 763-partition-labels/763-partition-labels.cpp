class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]] = i;
        }
        int i=0;
        vector<int> ans;
        int prev=0;
        for(int i=0; i<s.size(); i++){
            int ind=mp[s[i]];
            int j=i+1;
           while(j<ind)
           {
            ind = max(ind,mp[s[j]]);
               j++;
           }
            if(i==0)
            ans.push_back(ind+1-prev);
            else
                ans.push_back(ind-prev);
            i=ind;
            prev=ind;
        }
        return ans;
    }
};