class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i=0,j=0;
        string ans = "";
        while(i<a.length() && j<b.length()){
            ans = ans + a[i] + b[j];
            i++;
            j++;
        }
        while(i<a.length()){
            ans = ans + a[i];
            i++;
        }
        while(j<b.length()){
            ans = ans + b[j];
            j++;
        }
        return ans;
    }
};