class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long mod = 1e9 + 7;
        long long reso = k;
        long long ops = 0;
        for(long long x : nums){
            if(reso < x){
                long long need = x -reso;
                long long t = (need + k-1)/k;
                ops += t;
                reso += t*1LL*k;
            }
            reso -= x;
        }
        long long ans = (ops % mod) *((ops + 1)%mod)%mod;
        ans = ans*((mod + 1)/2)%mod;

        return (int)ans;
        
    }
};