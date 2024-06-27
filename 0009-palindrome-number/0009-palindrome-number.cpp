class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int curr = x;
        long revv =0;
        while(x){
            int tmp = x%10;
            revv = revv*10 + tmp;
            x=x/10;
        }
        return curr==revv;
    }
};