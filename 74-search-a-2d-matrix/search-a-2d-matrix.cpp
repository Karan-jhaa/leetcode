class Solution {
public:
    bool searchInrow(vector<vector<int>>& mat,int target ,int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }else if(target>mat[row][mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int startRow=0,endRow=m-1;
        while(startRow<= endRow){
            int midrow = startRow+(endRow-startRow)/2;
            if(target>=mat[midrow][0] && target<=mat[midrow][n-1]){
                return searchInrow(mat,target,midrow);
            }else if(target>=mat[midrow][n-1]){
                startRow=midrow+1;
            }else{
                endRow=midrow-1;
            }
        }
        return false;
    }
};