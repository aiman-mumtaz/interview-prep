#define ll long long
class Solution {
public:
    bool judgeSquareSum(int c) {
        ll s=0,e=sqrt(c)+1;
        while(s<=e){
            if((s*s + e*e) == c){
                return true;
            }
            if((s*s + e*e) > c){
                e--;
            }else{
                s++;
            }
        }
        return false;
    }
};