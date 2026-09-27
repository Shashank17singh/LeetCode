class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        n=stoi(s);
        int mul=1;
        int cnt=0;
        while(cnt<2){
            int rem=n%10;
            if(rem==0) return 0;
            mul*=rem;
            n/=10;
            cnt++;
        }
        return mul;
    }
};