class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA=0, countB=0;
        for(int i=1;i<colors.size()-1;i++){
            char ch=colors[i];
            if(ch=='A' && colors[i-1]==ch && colors[i+1]==ch) countA++;
            else if(ch=='B' && colors[i-1]==ch && colors[i+1]==ch) countB++;
        }
        if(countA>countB) return true;
        return false;
    }
};
