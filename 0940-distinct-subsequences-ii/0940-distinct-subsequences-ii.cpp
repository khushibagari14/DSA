class Solution {
public:
    const long long mod  = 1e9 + 7;
    int distinctSubseqII(string s) {
       int total =0 ;
       int dp[26]{};

       for(auto & c : s){
        c -='a';
        int add = (total -dp[c] + mod)%mod;
        dp[c] = 1+ total;
        total =(dp[c] + add)%mod;
       }
       return total;
        
    }
};