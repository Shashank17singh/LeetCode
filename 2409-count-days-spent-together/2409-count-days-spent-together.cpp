class Solution {
public:
    static constexpr int days[]={0,0,31,59,90,120,151,181,212,243,273,304,334};
    int toDays(const string& s){
        int m=stoi(s.substr(0,2));
        int d=stoi(s.substr(3,2));
        return days[m]+d;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start;
        string end;
        if(arriveAlice<=arriveBob) start=arriveBob;
        else start=arriveAlice;
        if(leaveAlice<=leaveBob) end=leaveAlice;
        else end=leaveBob;
        return max(0,toDays(end)-toDays(start)+1);
    }
};