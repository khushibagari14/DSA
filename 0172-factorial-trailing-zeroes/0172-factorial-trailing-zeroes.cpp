class Solution {
public:
    int fac(int n){
        if(n==0){
            return 1; 
        }
        return n*fac(n-1); 
    }

    int trailingZeroes(int n) {
        int res = 0;
        while(n > 0){
            res += n / 5;
            n = n / 5;
        }
        return res;
    }
};
