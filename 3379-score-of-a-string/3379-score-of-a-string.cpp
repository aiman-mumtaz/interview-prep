class Solution {
public:
    int scoreOfString(string s) {
        int cnt =0;
        for(int i=0;i<s.length()-1;i++){
            cnt += abs(s[i]-s[i+1]);
        }
        return cnt;
    }
};