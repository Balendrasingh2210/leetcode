class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start=0;
        for(int i=0;i<t.size();i++){
            if(s[start]==t[i]){
                start++;
            }
        }
        if(start==s.size()){
            return true;
        }
        return false;
    }
};