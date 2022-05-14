class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> g(n+1);
        
        for(auto &t: times)
        {
            g[t[0]].emplace_back(t[1], t[2]);
        }
        const int inf = INT_MAX;
        vector<int> dist(n+1,inf);
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dist[k] = 0;
        pq.push(make_pair(0,k));
        while(!pq.empty())
        {
            int prev = pq.top().second;
            pq.pop();
            vector<pair<int,int>> :: iterator it;
            for(it = g[prev].begin(); it!= g[prev].end(); it++)
            {
                int next = it->first;
                int nextDist = it->second;
                if(dist[next]> dist[prev]+nextDist)
                {
                    dist[next] = dist[prev]+nextDist;
                    pq.push(make_pair(dist[next],next));
                }
            }
        }
        
        int ans = *max_element(dist.begin()+1,dist.end());
        return ans == inf? -1 : ans;
    }
};