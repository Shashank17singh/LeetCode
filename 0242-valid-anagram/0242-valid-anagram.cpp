class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f;
        for(int i=0;i<s.size();i++) f[s[i]]++;
        for(int i=0;i<t.size();i++) f[t[i]]--;
        for(int i=0;i<f.size();i++) if(f[i]!=0) return false;
        return true;
    }
};