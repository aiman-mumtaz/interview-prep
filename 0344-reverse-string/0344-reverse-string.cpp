class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        while(i<s.size()/2){
            swap(s[i],s[s.size()-i-1]);
            i++;
        }
    }
};