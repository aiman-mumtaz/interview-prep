class Solution {
public:
    int passThePillow(int n, int time) {
        if(time >= n){
            int x = time%(n-1);
            int y = time/(n-1);
            cout<<x<<" "<<y;
            if(y%2 == 0)
                return x+1;
            else{
                // return time - x*(n-1);
                return n-x;
            }
        }
        return time+1;
    }
};