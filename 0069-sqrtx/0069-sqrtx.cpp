class Solution {
public:
    int mySqrt(int x) {
        int i=0;
        int j=x;
        if(x==1) return 1;
        int num=0;
        while(i<=j){
            long long guess=(long long)(i+j)/2;
            if(guess*guess<=x){ 
                num=guess;
                i=guess+1;
            } 
            else j=guess-1;
        }
        return num;
    }
};