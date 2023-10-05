class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for (int i = 0 ; i < mat.size() ; i++){
            sum += mat[i][i];
            (mat.size() %2 == 0 || ((mat.size() -1 - i) != i))  
            && (sum += mat[i][mat[0].size() - 1 - i]);
        }
        return sum;
    }
};