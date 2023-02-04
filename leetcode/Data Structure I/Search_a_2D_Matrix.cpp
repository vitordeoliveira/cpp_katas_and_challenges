// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Example 1:

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    // bool searchMatrix(const vector<vector<int>> &matrix, int target)
    // {
    //     int x = binarySearch(matrix, 0, 8, target);
    //     if (x != -1)
    //         return true;
    //     return false;
    // }

    // int binarySearch(const vector<vector<int>> vec, int left, int right, int x)
    // {

    //     if (right >= left)
    //     {
    //         int mid = left + (right - left) / 2;

    //         int value = vec[0][mid];

    //         if (vec[0][mid] == x)
    //             return mid;
    //         if (vec[0][mid] > x)
    //             return binarySearch(vec, left, mid - 1, x);
    //         return binarySearch(vec, mid + 1, right, x);
    //     }

    //     return -1;
    // }

    // bool searchMatrix(const vector<vector<int>> &matrix, int target)
    // {
    //     int mid = matrix.size() / 2;

    //     while (mid < matrix.size() && mid > -1)
    //     {
    //         pair<int, int> x = binarySearch(matrix[mid], 0, matrix[mid].size(), target);
    //         if (x.first != -1)
    //             return true;

    //         if (x.second == 0)
    //         {
    //             mid--;
    //         }
    //         else if (x.second > matrix[mid].size())
    //         {
    //             mid++;
    //         }
    //     }

    //     return false;
    // }

    // pair<int, int> binarySearch(const vector<int> vec, int left, int right, int x)
    // {
    //     int mid = left + (right - left) / 2;

    //     if (right >= left)
    //     {
    //         int value = vec[mid];

    //         if (vec[mid] == x)
    //             return {mid, 0};
    //         if (vec[mid] > x)
    //             return binarySearch(vec, left, mid - 1, x);
    //         return binarySearch(vec, mid + 1, right, x);
    //     }

    //     return {-1, mid};
    // }

    vector<int> reshape(const vector<vector<int>> &matrix)
    {
        int elements = 0;
        for (const auto &row : matrix)
        {
            elements += row.size();
        }

        vector<int> vec(elements);
        int k = 0;
        for (const auto &row : matrix)
        {
            for (int x : row)
            {
                vec[k++] = x;
            }
        }
        return vec;
    }

    bool searchMatrix(const vector<vector<int>> &matrix, int target)
    {
        vector<int> vec = reshape(matrix);
        return binarySearch(vec, 0, vec.size(), target);
    }

    int binarySearch(const vector<int> &vec, int left, int right, int x)
    {
        if (left >= right)
        {
            return false;
        }
        int mid = left + (right - left) / 2;
        if (vec[mid] == x)
        {
            return true;
        }
        else if (vec[mid] > x)
        {
            return binarySearch(vec, left, mid, x);
        }
        else
        {
            return binarySearch(vec, mid + 1, right, x);
        }
    }

    // bool searchMatrix(const vector<vector<int>> &matrix, int target)
    // {
    //     int rows = matrix.size();
    //     if (rows == 0)
    //         return false;
    //     int cols = matrix[0].size();
    //     if (cols == 0)
    //         return false;

    //     int row = 0, col = cols - 1;
    //     while (row < rows && col >= 0)
    //     {
    //         if (matrix[row][col] == target)
    //             return true;
    //         if (matrix[row][col] < target)
    //             row++;
    //         else
    //             col--;
    //     }
    //     return false;
    // }
};

int main()
{
    Solution s;

    s.searchMatrix({{1, 3, 5}, {10, 12, 13}, {14, 30, 3460}}, 1);

    // cout << s.binarySearch({1,3,4,5}, 0, 3, 0) << '\n';
}