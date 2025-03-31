class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i < m; i++){
            sort(grid[i].begin(), grid[i].end());
        }
        
        int result = 0;

        for(int i = n-1; i >= 0; i--){
            int maxVal = 0;
            for(int j = 0; j < m; j++){
                maxVal = max(maxVal, grid[j][i]);
            }
            result += maxVal;
        }

        return result;
    }
};