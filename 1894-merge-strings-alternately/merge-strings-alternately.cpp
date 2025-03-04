class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans="";
        while(i<word1.length() && j<word2.length()){
            cout<<word1[i]<<" "<<word2[j]<<"\n";
            ans = ans+ word1[i]+word2[j];
            i++;
            j++;
        }
        // cout<<i<<" "<<j<<"\n";
        // cout<<word1.length()<<" "<<word2.length();
        // return "";
        while(i<word1.length()){
            ans += word1[i];
            i++;
        }
        while(j<word2.length()){
            ans += word2[j];
            j++;
        }
        return ans;
    }
};