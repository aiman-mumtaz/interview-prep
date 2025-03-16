class Solution {
private:
    unordered_map<string,string> mpp;
    string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = "https://tinyurl.com/";
        if(mpp.find(longUrl) != mpp.end()){
            return mpp[longUrl];
        }else{
            int len = 7;
            for (int i = 0; i < len; ++i) {
                shortUrl += characters[rand() % 51];
            }
            mpp.insert({longUrl,shortUrl});
        }
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        for(auto x: mpp){
            if(x.second == shortUrl){
                return x.first;
            }
        }
        return "";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));