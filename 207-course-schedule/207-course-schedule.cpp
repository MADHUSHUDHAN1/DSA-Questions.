class Solution {
public:
     bool checkCycle(int node,vector<vector<int>>& adj,vector<int> &vis)
{
         if(vis[node] == 2) return true;
    vis[node] = 2;
    for(auto it : adj[node])
    {
        if(vis[it] != 1)
        {
            if(checkCycle(it,adj,vis))
            {
                return true;
            }
        }
       
    }
         vis[node] = 1;
    return false;
}

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      vector<vector<int>> adj(numCourses);
    for(auto it: prerequisites)
    {
        adj[it[0]].push_back(it[1]);
       // adj[it[1]].push_back(it[0]);
    }
        vector<int> vis(numCourses,0);
        //vector<int> dfsVis(numCourses,0);
        for(int i=0; i<numCourses; i++)
        {
            if(vis[i] == 0)
            {
                if(checkCycle(i,adj,vis))
                {
                    return false;
                }
            }
        }
        return true;
    }
};