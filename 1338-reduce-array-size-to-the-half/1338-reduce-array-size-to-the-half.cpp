class Solution {
public:
    
    int minSetSize(vector<int>& arr) {
        int ans = 0;
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        vector<int> srt;
        for(auto it: mp)
            srt.push_back(it.second);
        
        sort(srt.begin(),srt.end());
        
        int remove = 0,half = n/2, i=srt.size()-1;
        while(remove<half)
        {
            ans++;
            remove += srt[i--];
        }
       return ans;
    }
};