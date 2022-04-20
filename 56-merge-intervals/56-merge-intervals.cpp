class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> > ans;
        sort(intervals.begin(),intervals.end());
        int minL = intervals[0][0];
        int maxL = intervals[0][1];
        
        for(int i=1; i<intervals.size(); i++)
        {
            if(maxL >= intervals[i][0])
            {
                maxL = max(maxL,intervals[i][1]);
                minL = min(minL,intervals[i][0]);
            }
            else{
                ans.push_back({minL,maxL});
                minL = intervals[i][0];
                maxL = intervals[i][1];
                
            }
        }
        ans.push_back({minL,maxL});
        return ans;
    }
};