class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int x = nums[0];
        int y = nums[n-1];
        if(x<=y){
            for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1])return false;
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(nums[i]>nums[i-1])return false;
            }
        }
        return true;
    }
};