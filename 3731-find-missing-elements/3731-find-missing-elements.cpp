class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return {};
        int small = *min_element(nums.begin(),nums.end());
        int large = *max_element(nums.begin(),nums.end());
        vector<int> ans;
        unordered_set<int> present(nums.begin(), nums.end());
        for(int i = small ; i<= large ;i++){
            if (present.find(i) == present.end()) {
                ans.push_back(i);
            }
        }
      return ans;   
    }
};