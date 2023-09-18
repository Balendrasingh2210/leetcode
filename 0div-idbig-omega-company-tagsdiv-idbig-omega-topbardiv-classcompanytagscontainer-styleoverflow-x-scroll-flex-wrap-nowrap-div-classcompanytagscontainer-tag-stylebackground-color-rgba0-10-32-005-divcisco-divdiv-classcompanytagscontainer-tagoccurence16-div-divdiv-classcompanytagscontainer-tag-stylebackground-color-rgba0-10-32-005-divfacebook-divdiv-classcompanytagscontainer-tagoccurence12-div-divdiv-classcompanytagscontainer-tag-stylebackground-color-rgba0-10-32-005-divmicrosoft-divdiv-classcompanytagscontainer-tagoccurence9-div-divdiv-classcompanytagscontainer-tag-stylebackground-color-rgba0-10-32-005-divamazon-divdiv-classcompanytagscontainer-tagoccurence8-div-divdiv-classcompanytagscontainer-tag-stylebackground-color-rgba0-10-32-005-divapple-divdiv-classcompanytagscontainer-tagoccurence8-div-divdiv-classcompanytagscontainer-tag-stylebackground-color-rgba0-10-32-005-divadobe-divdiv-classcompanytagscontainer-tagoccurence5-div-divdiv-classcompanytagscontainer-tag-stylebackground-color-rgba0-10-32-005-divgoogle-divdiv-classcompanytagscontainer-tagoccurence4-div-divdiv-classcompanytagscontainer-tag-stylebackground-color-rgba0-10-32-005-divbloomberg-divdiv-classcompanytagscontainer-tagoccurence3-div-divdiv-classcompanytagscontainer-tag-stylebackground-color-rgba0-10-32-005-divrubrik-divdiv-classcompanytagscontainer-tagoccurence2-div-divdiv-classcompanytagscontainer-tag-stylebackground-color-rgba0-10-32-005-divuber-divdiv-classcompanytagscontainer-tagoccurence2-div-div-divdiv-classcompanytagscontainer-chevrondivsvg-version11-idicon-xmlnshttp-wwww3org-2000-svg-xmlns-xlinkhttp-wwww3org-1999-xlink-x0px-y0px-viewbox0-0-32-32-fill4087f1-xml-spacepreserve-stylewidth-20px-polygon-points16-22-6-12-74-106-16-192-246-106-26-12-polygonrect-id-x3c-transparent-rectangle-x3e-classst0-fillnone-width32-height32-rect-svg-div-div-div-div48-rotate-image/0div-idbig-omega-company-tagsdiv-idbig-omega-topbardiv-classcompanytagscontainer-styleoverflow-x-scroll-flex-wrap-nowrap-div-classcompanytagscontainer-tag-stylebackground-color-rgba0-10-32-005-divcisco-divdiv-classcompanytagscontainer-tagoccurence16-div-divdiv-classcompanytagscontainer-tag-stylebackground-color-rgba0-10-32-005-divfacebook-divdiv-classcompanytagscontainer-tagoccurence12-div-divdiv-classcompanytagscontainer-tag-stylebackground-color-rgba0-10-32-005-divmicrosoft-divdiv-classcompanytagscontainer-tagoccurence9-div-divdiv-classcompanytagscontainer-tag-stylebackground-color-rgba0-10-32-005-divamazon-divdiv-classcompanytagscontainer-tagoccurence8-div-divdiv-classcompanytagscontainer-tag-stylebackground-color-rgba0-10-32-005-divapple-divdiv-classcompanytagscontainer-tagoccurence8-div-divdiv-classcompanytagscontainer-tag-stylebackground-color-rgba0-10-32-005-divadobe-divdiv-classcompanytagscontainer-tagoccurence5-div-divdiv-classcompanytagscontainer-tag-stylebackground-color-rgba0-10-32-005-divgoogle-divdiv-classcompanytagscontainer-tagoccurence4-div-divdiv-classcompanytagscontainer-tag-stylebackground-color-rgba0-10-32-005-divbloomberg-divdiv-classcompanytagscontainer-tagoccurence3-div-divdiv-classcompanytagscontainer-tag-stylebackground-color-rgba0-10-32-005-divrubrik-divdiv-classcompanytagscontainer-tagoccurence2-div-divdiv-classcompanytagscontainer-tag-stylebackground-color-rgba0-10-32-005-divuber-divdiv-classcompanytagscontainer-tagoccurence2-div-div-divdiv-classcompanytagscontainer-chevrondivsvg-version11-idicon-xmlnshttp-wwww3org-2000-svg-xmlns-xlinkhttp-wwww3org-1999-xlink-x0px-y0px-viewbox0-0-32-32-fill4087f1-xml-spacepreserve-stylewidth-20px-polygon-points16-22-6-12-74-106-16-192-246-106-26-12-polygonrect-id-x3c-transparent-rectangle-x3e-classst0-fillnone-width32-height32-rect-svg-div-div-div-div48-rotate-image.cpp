class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>temp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[i][j]=matrix[j][i];
                // swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = temp[i][j];
            }
        }
        //now we will have to swap the rows of start to end
        int start=0,end=n-1;
        while(start<end){
            for(int i=0;i<n;i++){
                swap(matrix[i][start],matrix[i][end]);
            }
            start++;
            end--;
        }
    }
};