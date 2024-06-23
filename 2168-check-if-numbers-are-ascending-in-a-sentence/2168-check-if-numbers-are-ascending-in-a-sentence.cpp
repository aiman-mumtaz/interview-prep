class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> v;
        stringstream ss(s);
        string p;
        while(ss >> p){
            if(p[0] >= '0' && p[0]<='9')
            v.push_back(stoi(p));
        }
        int maxx = INT_MIN;
        for(auto x: v){
            if(x<=maxx){
                return false;
            }
            maxx=x;
        }
        return true;
    }
};