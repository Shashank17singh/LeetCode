class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=0;
        int c=0;
        if(a>=b) c=b;
        else c=a;
            for(int i=1;i<=c;i++){
                if(b%i==0 && a%i==0) cnt++;
            }
        return cnt;
    }
};