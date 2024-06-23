class Solution {
public:
    double minimumAverage(vector<int>& a) {
        sort(a.begin(),a.end());
        double min = INT_MAX;
        for(int i=0;i<a.size()/2;i++){
            if(double(a[i]+a[a.size()-i-1])/2 < min ){
                min=double(a[i]+a[a.size()-i-1])/2;
            }
        }
        return min;
    }
};