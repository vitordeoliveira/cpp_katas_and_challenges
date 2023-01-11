class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x = mat.size();
        int y = mat[0].size();
        if(x * y != r*c) return mat;

        vector<vector<int>> res(r, vector<int>(c));

        int cnt = 0;

        for(int row = 0; row < x; row++){
            for(int col = 0; col < y; col++){
                int cnt = row * y + col;
                res[cnt / c][cnt % c] = mat[row][col];
            }
        }
        
    
        return res;
    }
};