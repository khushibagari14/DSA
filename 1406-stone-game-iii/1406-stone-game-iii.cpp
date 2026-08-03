class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        int a = 0, b = 0;
        if(n == 3){
            a += stoneValue[0]+stoneValue[1];
            b += stoneValue[2];
        }
        else{
        for (int i = 0; i < n; i++) {
            if (i <= 2)
                a += stoneValue[i];
            else
                b += stoneValue[i];
        }
        }
        if (a > b) return "Alice";
        if (b == a) return "Tie";
        return "Bob";
    }
};