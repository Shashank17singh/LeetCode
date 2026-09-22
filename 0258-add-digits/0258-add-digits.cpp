class Solution {
public:
    int a=0;
    int fun(int &num){
        vector<int>res;
        while(num>0){
            res.push_back(num%10);
            num=num/10;
        }
        int n=res.size();
        for(int i=0;i<n;i++) a+=res[i];
        if(a>9) fun(a);
        return a;
    }
    int addDigits(int num) {
        if(num==0) return 0;
        return fun(num);
    }
};