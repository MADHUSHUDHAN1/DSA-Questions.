class Solution {
public:
   static bool comparater(pair<int,int> &a,pair<int,int> &b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int count =0;
        vector<int> ans;
        //vector<int> 
            
        int  c=0;
       // pair<int,int> pir;
        vector<pair<int,int>> pr;
        for(auto it:mp)
        {
          pr.push_back(make_pair(it.first,it.second)); 
        }
        sort(pr.begin(),pr.end(),comparater);
        for(int i=0; i<k; i++)
        {
            ans.push_back(pr[i].first);
        }
        return ans;
    }
};