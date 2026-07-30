class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int q = n >> 3;
        int r = n & 7;

        return ((q<<2)+r)*(q+1);
        
    }
};