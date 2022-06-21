class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
         unordered_map<int, unordered_set<int>> mp;
        vector<int> ans(k);
        for(auto &l: logs)
        {
            mp[l[0]].insert(l[1]);
        }
        for(auto &m: mp)
        {
            ans[m.second.size()-1]++;
        }
        return ans;
       
    }
};