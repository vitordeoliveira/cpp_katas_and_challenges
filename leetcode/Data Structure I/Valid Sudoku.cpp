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
            map<pair<int, int>, int> mgroup;
            // vector<char> line = board[i];
            

            // check line & col & group
            // for(int col = 0 ; col < 9; col++){
            //     if(board[line][col] != '.') m[{board[line][col], 'l'}]++;
            //     if(m[{board[line][col], 'l'}] > 1) {
            //         cout << "num: " << board[line][col] << ' ';
            //         return false;
            //     }

            //     if(board[col][line] != '.') m[{board[col][line], 'c'}]++;
            //     if(m[{board[col][line], 'c'}] > 1) {
            //         cout << "num: " << board[col][line] << ' ';
            //         return false;
            //     }
            // }


            // check group 3x3
            int limit = 3;
            int cnt = 0;
            int group = 0;
            for(int col = 0 ; col < 9; col++){

                if(line < 3 && col < 3){
                    group = 1;
                }

                else if(line < 3 && col < 6){
                    group = 2;
                }

                else if(line < 3 && col < 9){
                    group = 3;
                }

                else if(line < 6 && col < 3){
                    group = 4;
                }

                else if(line < 6 && col < 6){
                    group = 5;
                }

                else if(line < 6 && col < 9){
                    group = 6;
                }

                else if(line < 9 && col < 3){
                    group = 7;
                }

                else if(line < 9 && col < 6){
                    group = 8;
                }  

                else group = 9;
                

            
                m[{board[line][col], group}]++;

                // std::cout << group << "\n";

            }

        }
    }
};


int main(){
    Solution s;
    s.isValidSudoku({{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}});
}