class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //if nums has only one element return nums
        if(n==1) return;
        int lst = -1;//peak index
        //finding peak element
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) lst = i;
        }
        //if lst = -1 then nums is in descending order & we can swap n/2 elements simply 
        if(lst == -1){
            for(int i=0;i<n/2;i++){
                swap(nums[i],nums[n-i-1]);
            }
            return;
        }
        //if it is not in descending order
        int mn = nums[lst];
        int index = lst;
        //finding if any element x such that nums[lst-1]<x<nums[lst] is present
        for(int i=lst;i<n;i++){
            if(nums[i]>nums[lst-1]&& nums[i]<nums[lst]) index = i;
        }
        swap(nums[index],nums[lst-1]);
        sort(nums.begin()+lst,nums.end());
        return;
    }
};