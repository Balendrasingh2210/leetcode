class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mpp[sum]=i;
        }
        int target = sum-x;
        if(target<0)return -1;
        sum =0;
        mpp[0]=-1;
        int res = INT_MIN;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mpp.find(sum-target)!=mpp.end()){
                res = max(res,i-mpp[sum-target]);
            }
        }
        return res==INT_MIN?-1:n-res;
    }
};