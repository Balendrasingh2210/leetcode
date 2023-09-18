class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>pairs;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)cnt++;
            }
            pairs.push_back({cnt,i});
        }
        sort(pairs.begin(),pairs.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(pairs[i].second);
        }
        return ans;
    }
};