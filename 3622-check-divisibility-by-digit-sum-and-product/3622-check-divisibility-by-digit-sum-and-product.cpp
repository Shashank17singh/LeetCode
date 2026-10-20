class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int prod=1;
        int sum=0;
        while(num>0){
            int rem=num%10;
            prod*=rem;
            sum+=rem;
            num/=10;
        }
        if(n%(sum+prod)==0) return true;
        return false;
    }
};