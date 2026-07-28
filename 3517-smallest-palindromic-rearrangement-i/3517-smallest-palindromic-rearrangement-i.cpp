class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int count[26] ={};
        for(int i =0 ;i<n ;i++){
            count[s[i] -'a']++;
        }
        int idx =0;
        for(int i =0 ;i <26 ;i++){
            while(count[i] >= 2){
                s[idx++] = (char)(i + 'a');
                count[i] -=2;
            }
        }
        for(int i =0 ;i<n/2 ;i++){
            s[n -1 -i] =s[i];
        }
        return s;
    }
};