class Solution {
public:
    void moveZeroes(vector<int>& a) {
        // int s=0,e=a.size()-1;
        // while(s<e){
        //     if(a[s] == 0){
        //         swap(a[s],a[e]);
        //         e--;
        //     }
        //     s++;
        // }
        if(a.size()==1 && a[0] == 0){
            return;
        }
        int cnt=0;
        // int indexes[a.size()-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                a.erase(a.begin()+i);
                cnt++;
                i--;
            }
        }
        // if(a[0] == 0){
        //     a.erase(a.begin());
        //     cnt++;
        // }
        // cout<<a.size();
        while(cnt--){
            a.push_back(0);
        }
    }
};