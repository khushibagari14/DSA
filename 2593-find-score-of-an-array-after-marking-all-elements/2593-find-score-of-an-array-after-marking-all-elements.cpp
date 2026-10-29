class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        long long score =0;
        vector<bool> marked(n,false);
        vector<pair<int,int>> sorted;
        for(int i = 0 ; i <n ; ++i){
            sorted.push_back({nums[i],i});
        }
        sort(sorted.begin(),sorted.end());

        for(auto& p : sorted){
            int val = p.first;
            int idx = p.second;

            if(marked[idx]) continue;

            score += val;

            marked[idx] = true;
            if(idx > 0) marked[idx -1] = true;
            if(idx < n-1) marked[idx + 1] = true;
        }
        return score;
    }
};