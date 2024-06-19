class Solution {
public:

    bool isPalindrome(string s) {
        string x = "";
        for(char i: s){
            // i = (char)tolower(i);
            if((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')){
                x+=(char)tolower(i);
            }
        }
        int i=0,j=x.length()-1;
        if(x.length()<= 1){
            return true;
        }
        
        while(i<j){
            if(x[i] != x[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};