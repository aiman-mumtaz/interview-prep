class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        if(a.size()== 0){
            return 0;
        }
        int j=0;
        for(auto x: a){
            if(x != val){
                a[j++] = x;
            }
        }
        return j;
    }
};