class Solution {
public:
    void dfs(int node ,vector<int>& vis , vector<vector<int>>& adj){
        vis[node] =1;
        for(auto& it : adj[node]){
            if(!vis[it]){
                dfs(it ,vis  ,adj);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        for(auto & e : invocations){
            adj[e[0]].push_back(e[1]);
        }
        vector<int>vis(n,0);
       
        dfs(k ,vis,adj);   

    
    for (auto &e : invocations) {
            if (!vis[e[0]] && vis[e[1]]) {
                vector<int> all;
                for (int i = 0; i < n; i++)
                    all.push_back(i);
                return all;
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!vis[i])
                ans.push_back(i);
        }

        return ans;
    }
};