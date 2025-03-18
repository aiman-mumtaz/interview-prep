class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1.length() > s2.length()){
            swap(s1,s2); //s1 is always smaller
        }
        int len = gcd(s1.length(),s2.length());
        
        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                return "";
            }
        }
        int j=0;
        for(int i=len;i<s2.size();i++){
            if(s1[j%s1.length()] != s2[i]){
                return "";
            }
            j++;
        }
        return s1.substr(0,len);
    }
};