class Solution {
public:
    // int gcd(int x ,int y){
    //     if(x == 0) return y;
    //     return gcd( y% x ,x);
    // }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int small = nums[0];
        int largest = nums[n-1];

        return gcd(small, largest);
    }
};