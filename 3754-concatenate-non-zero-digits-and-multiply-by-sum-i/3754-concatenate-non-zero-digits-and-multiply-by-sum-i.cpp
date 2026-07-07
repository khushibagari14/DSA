class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum =0;
        int ans =0 , place =1;
        while(n > 0){
            int digit = n % 10;
            sum += digit;
            if(digit != 0){
                ans += digit*place;
                place *= 10;
                
            }
            n /= 10;
        }
        return 1LL*ans*sum;
    }
};