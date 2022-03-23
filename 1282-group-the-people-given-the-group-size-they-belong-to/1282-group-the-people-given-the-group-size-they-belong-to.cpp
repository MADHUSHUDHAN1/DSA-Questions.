class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> group;
        for(int i=0; i<groupSizes.size(); i++)
        {
            int key = groupSizes[i];
            group[key].push_back(i);
            if(group[key].size() == key)
            {
                ans.push_back(group[key]);
                group.erase(key);
            }
        }
        return ans;
    }
};