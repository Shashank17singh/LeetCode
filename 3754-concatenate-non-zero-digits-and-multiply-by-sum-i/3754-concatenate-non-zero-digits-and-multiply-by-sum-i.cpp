class Solution {
public:
    long long sumAndMultiply(int n) {
        string str=to_string(n);
        long sum=0;
        str.erase(remove(str.begin(), str.end(), '0'), str.end());
        for(int i=0;i<str.size();i++){
            sum+=str[i]-'0';
        }
        if(str.empty()) return 0;
        long x=stoll(str);
        return x*sum;
    }
};