class Solution {
public:
    long long countpaths(vector<string>& g){
        int m = g.size();
        int n = g[0].size();
        vector<vector<long long>> dp(m ,vector<long long>(n,0));

        if(g[0][0] == '#' || g[m-1][n-1] == '#') return 0;

        dp[0][0] =1;

        for(int i =0 ;i<m ;i++){
            for(int j =0 ;j <n ;j++){
                if(g[i][j] == '#') continue;

                if(i >0) dp[i][j] += dp[i-1][j];
                if(j >0) dp[i][j] += dp[i][j-1];

                dp[i][j] = min(dp[i][j] ,(long long)1000000000);
                
            }
         
        }
        return dp[m-1][n-1];
    }
    vector<string> createGrid(int m, int n, int k) {
        vector<string> grid(m,string(n,'.'));
        long long paths = countpaths(grid);

        if(paths < k) return {};
        for(int i =0 ;i< m ;i++){
            for(int j = 0; j <n ;j++){
                if((i == 0 && j == 0)|| (i == m-1 && j == n-1)) continue;

                grid[i][j] = '#';

                long long cur = countpaths(grid);
                if(cur >= k){
                    paths = cur; 
                }else{
                    grid[i][j] = '.';
                }
            }
        }
        if(countpaths(grid) != k) return {};

        return grid;
        
    }
};