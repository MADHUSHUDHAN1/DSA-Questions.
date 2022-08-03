class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
            int minele=intervals[0][0];
            int maxele = intervals[0][1];
        for(int i=1; i<intervals.size(); i++)
        {
            if(maxele >= intervals[i][0])
            {
                 minele = min(intervals[i][0],minele);
                maxele = max(maxele,intervals[i][1]);
            }
            else{
                ans.push_back({minele,maxele});
                minele =intervals[i][0];
                maxele = intervals[i][1];
            }
        }
        ans.push_back({minele,maxele});
        return ans;
    }
};