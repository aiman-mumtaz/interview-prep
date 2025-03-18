class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1.length() > s2.length()){
            swap(s1,s2); //s1 is always smaller
        }
        int len = gcd(s1.length(),s2.length());
        cout<<len;
        string ans = "";
        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                cout<<"here";
                return "";
            }
        }
        for(int i=0;i<len;i++){
            if(s1[i] != s2[i]){
                cout<<"here";
                return ans;
            }else{
                ans+=s1[i];
            }
        }
        int j=0;
        cout<<s1[0];
        for(int i=len;i<s2.size();i++){
            if(j<s1.length() && s1[j] != s2[i]){
                // cout<<s1[j]<<" "<<s2[i];
                return "";
            }
            j++;
        }
        return ans;
    }
};