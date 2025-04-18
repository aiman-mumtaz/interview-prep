class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i=0,j=0;
        string ans = "";
        while(i<a.length() || j<b.length()){
            if(i<a.length() && j<b.length()){
                ans = ans + a[i] + b[j];
                i++;
                j++;
            }else if(i<a.length()){
                ans = ans + a[i];
                i++;
            }else if(j<b.length()){
                ans = ans + b[j];
                j++;
            }
        }
        return ans;
    }
};