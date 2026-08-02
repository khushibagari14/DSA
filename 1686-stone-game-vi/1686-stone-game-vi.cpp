class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        int n = aliceValues.size();

        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);

        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return aliceValues[i] + bobValues[i] >
                   aliceValues[j] + bobValues[j];
        });

        int alice = 0, bob = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                alice += aliceValues[idx[i]];
            else
                bob += bobValues[idx[i]];
        }

        if (alice > bob) return 1;
        if (alice < bob) return -1;
        return 0;
    }
};