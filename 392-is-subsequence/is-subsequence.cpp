class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.length() == 0 && s.length() != 0){
            return false;
        }
        // if(s.length() > t.length()){
        //     swap(s,t);
        // }
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        return i==s.length();
    }
};