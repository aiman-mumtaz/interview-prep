class Solution {
public:
    void rotate(vector<int>& a, int k) {
        // in case k > a.size()
        k = k%a.size();
        // reverse 0 to n-k
        reverse(a.begin(),a.begin()+(a.size()-k));
        // reverse k elements from end
        reverse(a.begin()+(a.size()-k),a.end());
        // reverse the whole vector
        reverse(a.begin(),a.end());
    }
};