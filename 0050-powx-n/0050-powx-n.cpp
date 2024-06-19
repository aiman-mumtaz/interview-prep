class Solution {
public:
    // double calc(double x,double pw, long n){
    //     if(n==0){
    //         return pw;
    //     }
    //     pw = x*pw;
    //     return calc(x,pw,n-1);
    // }
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            if(n==INT_MIN){
                return (1/x)*myPow(1/x,-(n+1));
            }
            return myPow(1/x,-n);
        }
        return (n%2 == 0 ? myPow(x*x,n/2):x*myPow(x*x,n/2));
    }
};