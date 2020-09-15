class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rowSize = mat.size();
        int startIndex = 0;
        int endIndex = mat[0].size() - 1;
        int sum = 0;
        
        for (int i = 0; i < rowSize; ++i) {
            sum += mat[i][startIndex];
            
            if (startIndex != endIndex) {
                sum += mat[i][endIndex];
            }
            startIndex++;
            endIndex--;
        }    
        
        return sum;
    }
};
