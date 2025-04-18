class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) {
        vector<int> ans(a.size(),0);
        int sI=0,gI = a.size(),pI=0;
        for(int i=0;i<a.size();i++){
            if(a[i] > pivot){
                gI--;
            }
            if(a[i] == pivot){
                pI++;
            }
        }
        int index = 0;
        pI=gI-pI;
        while(sI<a.size()){
            if(a[sI]<pivot){
                ans[index++] = a[sI++];
            }else if(a[sI] > pivot){
                ans[gI++] = a[sI++];
            }else{
                ans[pI++] = a[sI++];
            }
        }
        return ans;
    }
};