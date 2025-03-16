class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        for(auto x: words){
            for(int i=0;i<x.length();i++){
                if(allowed.find(x[i]) > allowed.length()){
                    break;
                }
                if(i == x.length()-1){
                    ans++;
                }
            }
            cout<<"\n";
        }
        return ans;
    }
};