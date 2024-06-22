class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mpp;
        for(auto x:s){
            mpp[x]++;
        }
        int evn = 0,odd=0,hasOdd=false;
        for(auto x:mpp){
            if(x.second % 2 == 0){
                // use all even occurence
                evn +=x.second;
            }
            else {
                // use odd occurences by subtracting 1 and making it even
                odd += x.second-1;
                // check if odd occurences are present
                hasOdd=true;
            }
        }
        // if odd occurence is present, use one odd character otherwise use the sum
        return hasOdd?odd+evn+1:evn+odd;
    }
};