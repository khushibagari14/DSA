class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int total =0 , nonzero =0;
        for(auto& x : nums){
            nonzero |= x >0;
            total ^=x;
        }
        return nonzero*(n -!total);
        
    }
};