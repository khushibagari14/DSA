class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int rightsum =0 ;
        int leftsum =0;
        int leftq=0 , rightq =0;
        for(int i =0; i <n/2 ;i++){
            if(num[i] == '?'){
                leftq++;
            }
            else leftsum += num[i]-'0';
        }
        for(int j = n /2 ; j <n ;j++){
            if(num[j] == '?'){
                rightq++;
            }
            else rightsum += num[j] -'0';
        }
        if((leftq+ rightq) % 2 != 0){
            return true;
        }
        return leftsum - rightsum != (rightq - leftq) / 2 * 9;
        
    }
};