class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int num=arr[0];
        int cnt=0;
        for(int i=1;i<n;i++) {
            if(num>arr[i]) {
                cnt++;
                if(cnt>=k) return num;
            }    
            else{
                num=arr[i];
                cnt=1;
                if(cnt>=k) return num;
            }
        }
        return num;
    }
};