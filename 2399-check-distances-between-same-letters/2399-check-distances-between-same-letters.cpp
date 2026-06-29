class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>res(26,-1);
        for(int i =0 ;i < s.size() ;i++){
           int idx = s[i]-'a';
           if(res[idx] == -1){
            res[idx] = i;
           }else{
            int dis = i -res[idx] -1;
            if(dis != distance[idx]){
                return false;
            }
           }
        }
        return true;
        
    }
};