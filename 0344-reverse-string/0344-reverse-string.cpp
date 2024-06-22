class Solution {
public:
    void recc(int i,vector<char>& s){
        if(i>=s.size()/2){
            return;
        }
        swap(s[i],s[s.size()-i-1]);
        recc(i+1,s);
    } 
    void reverseString(vector<char>& s) {
        recc(0,s);
    }
};