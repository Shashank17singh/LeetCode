class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1) return 1;
        int Odd=1;
        int Even=2;
        int sumOdd=1;
        int sumEven=2;
        for(int i=1;i<n;i++){
            Odd+=2;
            Even+=2;
            sumOdd+=Odd;
            sumEven+=Even;
        }
        if(sumOdd>sumEven) return sumOdd%sumEven;
        else return sumEven%sumOdd;
    }
};