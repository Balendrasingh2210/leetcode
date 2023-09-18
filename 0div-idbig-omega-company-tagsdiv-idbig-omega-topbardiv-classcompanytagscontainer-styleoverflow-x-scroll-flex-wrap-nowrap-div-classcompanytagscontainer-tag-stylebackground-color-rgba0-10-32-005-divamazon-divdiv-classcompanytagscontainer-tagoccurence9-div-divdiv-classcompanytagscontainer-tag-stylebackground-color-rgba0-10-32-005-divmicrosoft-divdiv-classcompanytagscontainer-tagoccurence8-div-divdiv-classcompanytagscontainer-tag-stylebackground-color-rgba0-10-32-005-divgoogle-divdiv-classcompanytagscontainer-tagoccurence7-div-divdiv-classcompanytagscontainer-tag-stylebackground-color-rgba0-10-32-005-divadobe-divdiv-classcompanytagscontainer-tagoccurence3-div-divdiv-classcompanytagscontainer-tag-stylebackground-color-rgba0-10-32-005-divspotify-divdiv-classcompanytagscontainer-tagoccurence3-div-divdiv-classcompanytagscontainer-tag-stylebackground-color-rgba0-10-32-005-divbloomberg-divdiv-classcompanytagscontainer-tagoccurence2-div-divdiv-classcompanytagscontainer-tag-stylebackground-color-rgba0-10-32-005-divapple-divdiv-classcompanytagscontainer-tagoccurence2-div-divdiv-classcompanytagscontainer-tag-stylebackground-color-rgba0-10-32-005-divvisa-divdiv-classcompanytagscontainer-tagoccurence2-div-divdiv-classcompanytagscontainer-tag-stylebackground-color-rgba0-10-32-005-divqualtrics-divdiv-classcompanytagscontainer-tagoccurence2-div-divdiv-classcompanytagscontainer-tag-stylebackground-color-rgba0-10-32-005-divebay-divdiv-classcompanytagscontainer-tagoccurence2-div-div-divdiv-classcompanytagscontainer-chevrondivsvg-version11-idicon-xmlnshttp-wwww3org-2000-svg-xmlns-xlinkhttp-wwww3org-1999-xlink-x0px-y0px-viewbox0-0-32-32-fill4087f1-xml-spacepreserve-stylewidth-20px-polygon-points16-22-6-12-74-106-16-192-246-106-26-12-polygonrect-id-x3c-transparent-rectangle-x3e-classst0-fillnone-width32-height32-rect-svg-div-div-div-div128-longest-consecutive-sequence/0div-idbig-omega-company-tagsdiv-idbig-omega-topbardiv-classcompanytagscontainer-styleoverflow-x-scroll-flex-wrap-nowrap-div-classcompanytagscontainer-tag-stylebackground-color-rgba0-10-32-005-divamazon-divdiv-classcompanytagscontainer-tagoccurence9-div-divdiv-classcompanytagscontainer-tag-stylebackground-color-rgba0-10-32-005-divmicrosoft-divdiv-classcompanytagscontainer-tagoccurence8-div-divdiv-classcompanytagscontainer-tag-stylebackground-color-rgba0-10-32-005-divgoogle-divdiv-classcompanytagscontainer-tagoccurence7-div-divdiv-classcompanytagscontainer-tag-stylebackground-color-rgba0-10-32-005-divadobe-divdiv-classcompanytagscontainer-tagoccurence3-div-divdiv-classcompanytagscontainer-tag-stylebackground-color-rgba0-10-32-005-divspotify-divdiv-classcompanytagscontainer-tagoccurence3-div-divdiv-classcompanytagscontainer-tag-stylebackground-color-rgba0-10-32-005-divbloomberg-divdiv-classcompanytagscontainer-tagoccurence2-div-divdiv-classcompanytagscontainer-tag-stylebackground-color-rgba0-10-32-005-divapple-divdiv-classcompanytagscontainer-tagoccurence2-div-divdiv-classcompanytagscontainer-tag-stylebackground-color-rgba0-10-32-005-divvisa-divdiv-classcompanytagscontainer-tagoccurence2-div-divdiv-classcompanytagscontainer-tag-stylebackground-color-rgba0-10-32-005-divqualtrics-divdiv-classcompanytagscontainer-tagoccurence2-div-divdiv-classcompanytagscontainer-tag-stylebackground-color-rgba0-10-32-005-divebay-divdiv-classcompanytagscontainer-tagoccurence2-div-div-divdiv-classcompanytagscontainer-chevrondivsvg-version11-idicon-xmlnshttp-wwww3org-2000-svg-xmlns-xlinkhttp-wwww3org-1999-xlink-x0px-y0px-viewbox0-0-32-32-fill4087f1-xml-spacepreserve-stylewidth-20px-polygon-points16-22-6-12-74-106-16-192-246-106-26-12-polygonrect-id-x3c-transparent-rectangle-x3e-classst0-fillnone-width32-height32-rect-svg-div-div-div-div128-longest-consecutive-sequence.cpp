class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==-0) return 0;
        int longest = 1;
        unordered_set<int>st;
        //put all the elements in the sequence
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        //find the longest sequence
        for(auto it:st){
            //if "it" is the starting point
            if(st.find(it-1) == st.end()){
                //finding consecutive number
                int cnt =1;
                int x =it;
                while(st.find(x+1)!=st.end()){
                    x+=1;
                    cnt+=1;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};