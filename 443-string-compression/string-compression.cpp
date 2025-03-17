class Solution {
public:
    int compress(vector<char>& a) {
        string s;
        int cnt = 1;
        for(int i=0;i<a.size();i++){
            if((i<a.size()-1) && (a[i] == a[i+1])){
                cnt++;
            }else{
                if(cnt == 1){
                    s += a[i];
                }else{
                    s = s + a[i] + to_string(cnt);
                }
                cnt = 1;
            }

        }
        a={};
        for(auto x:s){
            a.push_back(x);
        }
        return a.size();
    }
};