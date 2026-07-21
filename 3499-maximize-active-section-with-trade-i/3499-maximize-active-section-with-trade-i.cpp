class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        for (char c : s)
            if (c == '1') ones++;

        string t = "1" + s + "1";

        vector<int> len;
        vector<char> type;

        int n = t.size();

        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && t[j] == t[i])
                j++;

            type.push_back(t[i]);
            len.push_back(j - i);

            i = j;
        }

        int ans = ones;

        for (int i = 1; i + 1 < len.size(); i++) {
            if (type[i] == '1' &&
                type[i - 1] == '0' &&
                type[i + 1] == '0') {

                int cur =
                    ones
                    - len[i]
                    + len[i - 1]
                    + len[i]
                    + len[i + 1];

                ans = max(ans, cur);
            }
        }

        return ans;
    }
};