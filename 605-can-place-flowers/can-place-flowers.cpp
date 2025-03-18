class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        if(n==0){
            return true;
        }
        if(a.size() == 1){
            return a[0] == 0;
        }
        for(int i=0;i<a.size();i++){
            if(i>0 && i<a.size()-1){
                if(a[i] == 0 && a[i-1] == 0 && a[i+1] == 0){
                    n--;
                    a[i] = 1;
                }
            }else if(i==0){
                if(a[i] == 0 && a[1] == 0){
                    a[0] = 1;
                    n--;
                }
            }else if(i == a.size()-1){
                if(a[i] == 0 && a[a.size()-2] == 0){
                    a[a.size()-1] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};