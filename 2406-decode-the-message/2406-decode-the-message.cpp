class Solution {
public:
    string decodeMessage(string key, string message) {
        char x= 'a';
        unordered_map<char,char> mpp;
        for(char i: key){
            if(i != ' ' && mpp.find(i) == mpp.end()){
                mpp[i]= x;
                // cout<<i<<" "<<x<<"\n";
                x=x+1;
            }
        }
        for(int i=0;i<message.length();i++){
            if(message[i] != ' ')
                message[i]=mpp[message[i]];
        }
        return message;
    }
};