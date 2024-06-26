class Solution {
public:
    bool check(vector<int>& a) {
        bool flg = false;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1]){
                if(flg == false){
                    flg = true;
                }else{
                    return false;
                }
            }
        }
        if(flg==true && a[0]<a[a.size()-1]){
            return false;
        }
        return true;
    }
};