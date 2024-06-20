class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mpp;
        for(auto x: stones){
            mpp[x]++;
        }
        int cnt=0;
        for(auto x:mpp){
            if(jewels.find(x.first) != string::npos)
                cnt += x.second;
        }
        return cnt;
    }
};