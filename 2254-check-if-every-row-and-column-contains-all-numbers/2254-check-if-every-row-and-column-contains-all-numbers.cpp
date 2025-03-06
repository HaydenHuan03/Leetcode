class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int size = matrix.size();

        for(int i = 0; i < size; i++){
            unordered_set<int>rowSet, colSet;

            for(int j = 0; j < size; j++){
                if(rowSet.count(matrix[i][j]) || colSet.count(matrix[j][i])){
                    return false;
                }

                rowSet.insert(matrix[i][j]);
                colSet.insert(matrix[j][i]);
            }
        }
        return true;
    }
};