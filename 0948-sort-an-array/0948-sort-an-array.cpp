class Solution {
public:
    void merge(vector<int> &a, int low, int mid, int high){
        int s=low,e=mid+1;
        vector<int>tmp;
        while(s<=mid && e<=high){
            if(a[s]<=a[e]){
                tmp.push_back(a[s]);
                s++;
            }else{
                tmp.push_back(a[e]);
                e++;
            }
        }
        while(s<=mid){
            tmp.push_back(a[s]);
            s++;
        }
        while(e<=high){
            tmp.push_back(a[e]);
            e++;
        }
        for(int i=low;i<=high;i++){
            a[i]=tmp[i-low];
        }
    }
    void mergeSort(vector<int>&a, int low, int high){
        if(low>=high){
            return;
        }
        int mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    vector<int> sortArray(vector<int>& a) {
        mergeSort(a,0,a.size()-1);
        return a;
    }
};