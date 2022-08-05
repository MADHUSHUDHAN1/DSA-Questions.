class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        map<int,int> mp;
        int n = arr.size();
        
        for(int i=0; i<n; i++)
        {
            mp[arr[i]] = i;
        }
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int f = arr[i], s=arr[j];
                int count=2;
                while(1)
                {
                    int t = f+s;
                    if(mp.find(t) != mp.end())
                    {
                        f=s;
                        s=t;
                        count++;
                    }
                    else {
                        break;
                    }
                }
                mx = max(mx,count);
            }
            
        }
        if(mx<3) return 0;
        
        return mx;
    }
};