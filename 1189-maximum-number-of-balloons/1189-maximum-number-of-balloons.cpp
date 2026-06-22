class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int countb =0 , counta =0 ,countl =0 ,countn =0 ,counto = 0;

        for(auto & t : text){
            if( t == 'b'){
                countb++;
            }
            else if( t == 'a'){
                counta++;
            }
            else if(t == 'l'){
                countl++;
            }
            else if(t == 'o'){
                counto++;
            }
            else if(t == 'n'){
                countn++;
            }
        }
        return min({countb, counta, countl / 2, counto / 2, countn});
        
    }
};
