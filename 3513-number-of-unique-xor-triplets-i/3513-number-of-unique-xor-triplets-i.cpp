class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n= nums.size();
        if(n < 3) return n;
        // set<int>ans;
        // for(int i =0 ;i<n ;i++){
        //     for(int j =i+1 ;j<n ;j++){
        //         for(int k =j+1 ;k<n ;k++){
        //             int xr = nums[i]^nums[j]^nums[k];
        //             ans.insert(xr);
        //         }
        //     }
        // }
        // return ans.size();
        int ans = 1;
        while(ans <= n) ans<<=1;
        return ans;
        
    }
};