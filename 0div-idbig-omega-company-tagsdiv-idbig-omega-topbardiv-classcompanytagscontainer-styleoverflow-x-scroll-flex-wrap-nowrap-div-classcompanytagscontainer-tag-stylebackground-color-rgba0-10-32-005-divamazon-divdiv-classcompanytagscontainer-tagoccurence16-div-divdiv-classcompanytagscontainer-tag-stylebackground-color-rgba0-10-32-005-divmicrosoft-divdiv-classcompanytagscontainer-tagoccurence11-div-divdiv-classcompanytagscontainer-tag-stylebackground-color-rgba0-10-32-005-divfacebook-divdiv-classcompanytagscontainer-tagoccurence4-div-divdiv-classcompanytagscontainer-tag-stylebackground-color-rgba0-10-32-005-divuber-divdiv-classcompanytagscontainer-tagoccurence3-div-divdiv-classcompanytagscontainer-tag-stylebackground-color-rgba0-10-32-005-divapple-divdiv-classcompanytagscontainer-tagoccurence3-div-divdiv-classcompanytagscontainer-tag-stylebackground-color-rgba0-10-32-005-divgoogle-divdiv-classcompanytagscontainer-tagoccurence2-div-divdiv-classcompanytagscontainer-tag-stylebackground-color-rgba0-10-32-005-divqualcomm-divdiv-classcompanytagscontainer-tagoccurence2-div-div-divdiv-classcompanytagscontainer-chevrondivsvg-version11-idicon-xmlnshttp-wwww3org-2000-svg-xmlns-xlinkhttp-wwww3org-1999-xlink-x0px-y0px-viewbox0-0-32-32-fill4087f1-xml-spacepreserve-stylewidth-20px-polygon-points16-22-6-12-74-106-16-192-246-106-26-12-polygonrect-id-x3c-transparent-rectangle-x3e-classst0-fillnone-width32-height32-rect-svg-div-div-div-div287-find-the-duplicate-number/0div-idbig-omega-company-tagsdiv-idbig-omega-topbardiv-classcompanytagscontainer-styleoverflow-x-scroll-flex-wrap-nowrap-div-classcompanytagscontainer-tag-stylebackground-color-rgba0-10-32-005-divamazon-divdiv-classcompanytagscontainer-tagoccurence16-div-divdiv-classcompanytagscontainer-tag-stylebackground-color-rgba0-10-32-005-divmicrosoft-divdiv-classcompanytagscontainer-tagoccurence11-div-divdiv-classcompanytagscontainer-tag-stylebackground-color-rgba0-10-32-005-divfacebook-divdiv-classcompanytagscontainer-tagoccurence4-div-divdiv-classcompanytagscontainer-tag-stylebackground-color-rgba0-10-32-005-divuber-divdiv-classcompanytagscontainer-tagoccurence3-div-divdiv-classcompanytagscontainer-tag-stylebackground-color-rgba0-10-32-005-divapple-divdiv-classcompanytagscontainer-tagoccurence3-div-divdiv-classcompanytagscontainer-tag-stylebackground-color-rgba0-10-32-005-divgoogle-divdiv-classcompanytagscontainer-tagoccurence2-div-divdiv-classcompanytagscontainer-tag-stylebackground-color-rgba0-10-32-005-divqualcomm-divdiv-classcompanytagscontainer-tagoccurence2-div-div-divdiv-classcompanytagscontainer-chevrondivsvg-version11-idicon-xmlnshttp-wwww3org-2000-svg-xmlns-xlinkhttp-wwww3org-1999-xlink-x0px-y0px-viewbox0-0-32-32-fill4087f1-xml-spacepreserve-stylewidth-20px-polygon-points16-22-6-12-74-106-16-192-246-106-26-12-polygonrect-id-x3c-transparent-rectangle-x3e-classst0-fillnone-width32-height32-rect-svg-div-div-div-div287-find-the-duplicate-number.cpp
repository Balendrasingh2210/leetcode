class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hash[1000000]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<1000000;i++){
            if(hash[i]>1){
                return i;
            }
        }
        return 1;
    }
};