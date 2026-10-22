class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title;
        while (columnNumber>0) {
            columnNumber--;
            title.push_back('A'+columnNumber%26);
            columnNumber/=26;
        }
        reverse(title.begin(),title.end());
        return title;
    }
};