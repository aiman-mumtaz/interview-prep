class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s==t){
            return true;
        }
        if(s.length() != t.length()){
            return false;
        }
        vector<int> sfreq(26,0);
        vector<int> tfreq(26,0);
        int i=0,j=0;
        for(int i=0;i<s.length();i++){
            sfreq[s[i]-'a']++;
            tfreq[t[i]-'a']++;
        }

        return sfreq==tfreq;
    }
};