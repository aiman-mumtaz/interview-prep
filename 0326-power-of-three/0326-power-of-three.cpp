class Solution {
public:
long long powerThree(int x, int n,long long val){
    if(pow(3,x)>n){
        return val;
    }
    val = pow(3,x);
    return powerThree(x+1,n,val);
}
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n==powerThree(1,n,0)){
            return true;
        }
        return false;
    }
};