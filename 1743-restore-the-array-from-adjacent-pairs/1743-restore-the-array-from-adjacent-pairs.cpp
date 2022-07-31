class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
      map<int,set<int>> mp;
        int n = adjacentPairs.size();
        for(auto it : adjacentPairs)
        {
            mp[it[0]].insert(it[1]);
            mp[it[1]].insert(it[0]);
        }
        int first =0;
        for(auto it: mp)
        {
            if(it.second.size() == 1)
            {
                first = it.first;
                break;
            }
        }
        vector<int> ans;
       while(!mp[first].empty())
       {
           ans.push_back(first);
           for(auto it: mp[first])
           {
               int next = it;
               mp[next].erase(first);
               mp[first].erase(next);
               first = next;
           }
       }
        ans.push_back(first);
        return ans;
    }
};