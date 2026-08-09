class Solution {
public:
    int n;
    vector<int>suffix;
    vector<vector<int>>dp;
    int solve(int i , int m){
        if(i >= n) return 0;

        if(2*m >= n-i) return suffix[i];

        if(dp[i][m] != -1) return dp[i][m];

        int ans =0;
        for(int x =1 ; x <= 2*m ;x++){
            int taken = suffix[i] - suffix[i+1];
            int oppent = solve(i+x , max(m,x));
            ans = max(ans , taken + suffix[i+1] -oppent);
        }
        return dp[i][m]=ans;
    }
    int stoneGameII(vector<int>& piles) {
         n = piles.size();
        suffix.resize(n+1 ,0);
        for(int i = n-1 ; i>=0 ;i--){
            suffix[i] = suffix[i+1] + piles[i];
        }
        dp.assign(n, vector<int>(n+1 ,-1));
        return solve(0,1);

        
    }
};