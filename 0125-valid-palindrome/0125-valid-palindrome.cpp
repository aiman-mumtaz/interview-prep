class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        for(auto i: s){
            i = (char)tolower(i);
            if((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')){
                x+=i;
            }
        }
        int i=0,j=x.length()-1;
        if(x.length()<= 1){
            return true;
        }
        
        cout<<x;
        while(i<j){
            if(x[i] != x[j]){
                
                cout<<x[i];
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};