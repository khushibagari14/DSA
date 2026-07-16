class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>gd(n);
        int mx =0;
        for(int i =0 ;i <n ;i++){
            mx = max(mx , nums[i]);
            gd[i] = gcd(mx,nums[i]);
        }
        sort(gd.begin(),gd.end());
        long long sum =0;
        for(int i =0 ,j = n-1;i <n/2 ;++i ,--j){
                  sum += gcd(gd[i],gd[j]);
            
        }
       return sum; 
    }
};