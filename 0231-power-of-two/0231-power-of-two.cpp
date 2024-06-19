class Solution {
public:
    long long twoPower(int x, int n, long long val){
        if(pow(2,x)>n){
            return val;
        }
        val = pow(2,x);
        return twoPower(x+1,n,val);
    }
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        if(n== twoPower(1,n,0)){
            return true;
        }
        return false;
    }
};