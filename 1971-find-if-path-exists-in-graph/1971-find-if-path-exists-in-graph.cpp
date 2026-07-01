class Solution {
    bool dfs(vector<vector<int>>&graph, int src, int dest,vector<bool>&visited){
        if(src==dest){
            return true;
        }
        visited[src]=true;
        for(int i:graph[src]){
            if(visited[i]==false){
               if(dfs(graph,i,dest,visited)){
                return true;
               }
            }
        }
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
        vector<vector<int>> graph(n);
        for(auto i:edges){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        vector<bool>visited(n,false);
        return dfs(graph,src,dest,visited);
    }
};