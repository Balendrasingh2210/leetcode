class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int hash[2001]={0};
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        for(long int i=1;i<=2000;i++){
            if(hash[i]==0)
                ans.push_back(i);
        }
        return ans[k-1];
    }
};