#include <vector>
#include <map>
#include <iostream>
#include <utility>

using namespace std;

// class Solution
// {
// public:
//     bool isValidSudoku(const vector<vector<char>> &board)
//     {
//         map<pair<char, int>, int> mgroup;
//         int group = 0;

//         for (int line = 0; line < board.size(); line++)
//         {
//             map<pair<int, char>, int> m;
//             // vector<char> line = board[i];

//             // check line & col & group
//             for (int col = 0; col < 9; col++)
//             {
//                 if (board[line][col] != '.')
//                     m[{board[line][col], 'l'}]++;
//                 if (m[{board[line][col], 'l'}] > 1)
//                 {
//                     return false;
//                 }

//                 if (board[col][line] != '.')
//                     m[{board[col][line], 'c'}]++;
//                 if (m[{board[col][line], 'c'}] > 1)
//                 {
//                     return false;
//                 }

                    
//                 if (board[line][col] != '.')
//                 {
//                     if (line < 3 && col < 3)
//                     {
//                         group = 1;
//                     }

//                     else if (line < 3 && col < 6)
//                     {
//                         group = 2;
//                     }

//                     else if (line < 3 && col < 9)
//                     {
//                         group = 3;
//                     }

//                     else if (line < 6 && col < 3)
//                     {
//                         group = 4;
//                     }

//                     else if (line < 6 && col < 6)
//                     {
//                         group = 5;
//                     }

//                     else if (line < 6 && col < 9)
//                     {
//                         group = 6;
//                     }

//                     else if (line < 9 && col < 3)
//                     {
//                         group = 7;
//                     }

//                     else if (line < 9 && col < 6)
//                     {
//                         group = 8;
//                     }

//                     else
//                         group = 9;

//                     mgroup[{board[line][col], group}]++;

//                     if (mgroup[{board[line][col], group}] > 1)
//                     {
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };


class Solution
{
public:
    bool isValidSudoku(const vector<vector<char>> &board)
    {
        map<pair<char, int>, int> mgroup;
        int group = 0;

        for (int line = 0; line < board.size(); line++)
        {
            map<pair<int, char>, int> m;
            // vector<char> line = board[i];

            // check line & col & group
            for (int col = 0; col < 9; col++)
            {
                if (board[line][col] != '.')
                    m[{board[line][col], 'l'}]++;
                if (m[{board[line][col], 'l'}] > 1)
                {
                    return false;
                }

                if (board[col][line] != '.')
                    m[{board[col][line], 'c'}]++;
                if (m[{board[col][line], 'c'}] > 1)
                {
                    return false;
                }


                if (board[line][col] != '.')
                {
                    int group = (line / 3) * 3 + (col / 3);                    
                    mgroup[{board[line][col], group}]++;

                    if (mgroup[{board[line][col], group}] > 1)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    s.isValidSudoku({{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                     {'6', '5', '.', '1', '9', '5', '.', '.', '.'},
                     {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                     {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                     {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                     {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                     {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                     {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                     {'.', '.', '.', '.', '8', '.', '.', '7', '9'}});
}