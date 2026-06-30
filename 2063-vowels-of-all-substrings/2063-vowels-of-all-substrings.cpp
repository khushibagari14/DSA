class Solution {
public:
    long long countVowels(string word) {
        int n = word.length();
        long long count =0;
        for(int i =0 ;i<n ;i++){
            char ch = word[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count += 1LL * (i + 1) * (n - i);            }
        }

       return count; 
    }
};