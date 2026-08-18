class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int mx =  *max_element(nums.begin(),nums.end());
        vector<int>freq(mx+1,0);
        for(int i : nums){
            freq[i]++;
        }
        if(k ==1){
            for(int i = mx ;i>=0 ;i--){
                if(freq[i] == 1){
                    return i;
                }   
            }
        } else if( k == n){
            return mx;
        }else{
            int maxi = -1;
            if(freq[nums[0]] == 1){
                maxi =max(maxi,nums[0]);
            }
            if(freq[nums[n-1]] == 1){
                maxi = max(maxi,nums[n-1]);
            }
            return maxi;
        } 
        return -1;
        }
};