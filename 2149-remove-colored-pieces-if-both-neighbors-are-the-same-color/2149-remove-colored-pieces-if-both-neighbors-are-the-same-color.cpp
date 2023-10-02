class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int alice=0;
        int bob = 0;
        for(int i=1;i<n-1;i++){
            if(colors[i]=='A' && colors[i]==colors[i-1]&& colors[i]==colors[i+1])alice++;
            if(colors[i]=='B' && colors[i]==colors[i-1]&& colors[i]==colors[i+1])bob++;
        }
        if(alice>bob)return true;
        else return false;
    }
};
