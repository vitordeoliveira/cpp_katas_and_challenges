#include <vector>
#include <map>
#include <iostream>
#include <utility>

using namespace std;

class Solution {
public:
    bool isValidSudoku(const vector<vector<char>>& board) {
        for(int line = 0; line < board.size(); line++){
            map<pair<int, char>, int> m;
            // vector<char> line = board[i];
            

            // check line
            for(int col = 0 ; col < 9; col++){
                if(board[line][col] != '.') m[{board[line][col], 'l'}]++;
                if(m[{board[line][col], 'l'}] > 1) {
                    cout << "num: " << board[line][col] << ' ';
                    return false;
                }

                if(board[col][line] != '.') m[{board[col][line], 'c'}]++;
                if(m[{board[col][line], 'c'}] > 1) {
                    cout << "num: " << board[col][line] << ' ';
                    return false;
                }
            }


            // check group 3x3
            for(int col = 0 ; col < 9; col++){
                
                // [0][0]
                // [0][1]
                // [0][2]
                // [1][0]
                // [1][1]
                // [1][2]
                // [2][0]
                // [2][1]
                // [2][2]

                // [0][3]
                // [0][4]
                // [0][5]
                // [1][3]
                // [1][4]
                // [1][5]
                // [2][3]
                // [2][4]
                // [2][5]

                // [3][3]
                // [3][4]
                // [3][5]
                // [4][3]
                // [4][4]
                // [4][5]
                // [5][3]
                // [5][4]
                // [5][5]
            }

        }
    }
};


int main(){
    Solution s;
    s.isValidSudoku({ 
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','1','1','9','5','.','.','.'}
        ,{'2','9','8','.','.','.','.','6','.'}
        ,{'8','.','.','.','6','.','.','.','3'}
        ,{'4','.','.','8','.','3','.','.','1'}
        ,{'7','.','.','.','2','.','.','.','6'}
        ,{'7','6','.','.','.','.','2','8','.'}
        ,{'.','.','.','4','1','9','.','.','5'}
        ,{'.','.','.','.','8','.','.','7','9'}
        });
}