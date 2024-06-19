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
        // int i=0;
        // int j=s.size()-1;
        // while(i<j){
        //     swap(s[i],s[j]);
        //     i++;
        //     j--;
        // }
        recc(0,s);
    }
};