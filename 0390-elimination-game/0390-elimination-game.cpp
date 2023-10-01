class Solution {
public:
    int lastRemaining(int n) {
        int start = n, diff = 1, no = n;
        bool l2r = true;

        while(no>1){
            if(!l2r || no%2 ==1){
                start-=diff;
            }
            diff*=2;
            no/=2;
            l2r = !l2r;
        }
        return start;
    }
};