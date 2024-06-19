class Solution {
public:
    int fib(int n) {
        int sum = 0;
        if(n<2){
            return n;
        }
        int a = 0;
        int b = 1;
        for(int i=2;i<=n;i++){
            sum = a+b;
            // cout<<sum<<" ";
            
            a=b;
            b=sum;
        }
        // cout<<sum;
        return sum;
    }
};