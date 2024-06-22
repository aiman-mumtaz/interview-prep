class Solution {
public:
    bool judgeSquareSum(int c) {
        long long s=0,e=sqrt(c)+1;
        while(s<=e){
            if(s*s + e*e == c){
                return true;
            }
            if(s*s + e*e >c){
                e--;
            }else{
                s++;
            }
        }
        return false;
    }
};