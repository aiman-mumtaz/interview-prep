class Solution {
public:
    long long fourPow(int x, int n, int val){
        if(pow(4,x) > n){
            return val;
        }
        val = pow(4,x);
        return fourPow(x+1,n,val);
    }
    bool isPowerOfFour(int n) {
        if(n==0 || n==1){
            return n;
        }
        if(n==fourPow(1,n,0)){
            return true;
        }
        return false;
    }
};