class Solution {
public:
    bool isAlphaNum(char c){
        if((c>='a' && c <='z') || (c>='A' && c <='Z') || (c>='0' && c <='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            while(i<s.length() && !isAlphaNum(s[i])){
                i++;
            }
            while(j>0 && !isAlphaNum(s[j])){
                j--;
            }
            if(i<=j){
                if(tolower(s[i]) != tolower(s[j])){
                    cout<<s[i];
                    return false;
                }
                i++;
                j--;
            }
        }
        return true;
    }
};