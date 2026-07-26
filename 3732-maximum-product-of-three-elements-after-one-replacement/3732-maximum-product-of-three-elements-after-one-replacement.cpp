class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(), nums.end());
        long long maxi = 1LL * nums[n - 1] * nums[n - 2] * 100000LL;
        maxi = max(maxi, 1LL * nums[0] * nums[n - 1] * (-100000LL));
        maxi = max(maxi, 1LL * nums[0] * nums[1] * 100000LL);
        return maxi;
    }
};