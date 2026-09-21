class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        if(t>0) return num+(2*t);
        else return num-(2*t);
    }
};