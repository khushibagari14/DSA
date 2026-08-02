class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
       sort(piles.begin(),piles.end());
       int alice =0,bob =0;
       int i =0 ;
       while(i>0){
       if(i %2 ==0 ){
        bob += piles[n-i];
       }else{
        alice +=piles[n-i];
       }
       }

    if(alice < bob) return false;

    return true;
        
    }
};