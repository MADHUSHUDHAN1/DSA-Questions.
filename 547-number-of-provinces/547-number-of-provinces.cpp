class Solution {
public:
    void dfs(int v,vector<int> adj[],vector<int> &visited)
    {
        visited[v] = 1;
        for(auto it:adj[v])
        {
            if(visited[it]==0)
            {
                dfs(it,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        
        vector<int> adj[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<isConnected[i].size(); j++)
            {
                if(i != j && isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        
        vector<int> visited(n,0);
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(visited[i] == 0)
            {
                count++;
                dfs(i,adj,visited);
            }
        }
        return count;
    }
};