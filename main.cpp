class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rowSize = mat.size();
        int startIndex = 0;
        int endIndex = mat[0].size() - 1;
        int sum = 0;
        
        for (int i = 0; i < rowSize; ++i) {
            sum += (mat[i][startIndex++] + mat[i][endIndex--]);            
        }    
        
        if (rowSize % 2 == 1) {
            sum -= mat[(rowSize - 1)/2][(mat[0].size() - 1) /2];
        }
        
        return sum;
    }
};
