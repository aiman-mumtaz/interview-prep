class Solution {
public:
// Practising recursion
    // void recc(int i,vector<char>& s){
    //     if(i>=s.size()/2){
    //         return;
    //     }
    //     swap(s[i],s[s.size()-i-1]);
    //     recc(i+1,s);
    // } 
    void reverseString(vector<char>& s) {
        // recc(0,s);
        int i=0;
        while(i<s.size()/2){
            swap(s[i],s[s.size()-i-1]);
            i++;
        }
    }
};