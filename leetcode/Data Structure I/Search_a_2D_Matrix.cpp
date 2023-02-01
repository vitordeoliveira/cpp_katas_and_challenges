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

        bool searchMatrix(const vector<vector<int>> &matrix, int target)
    {
        int x = binarySearch(matrix, 0, 8, target);
        if (x != -1)
            return true;
        return false;
    }

    int binarySearch(const vector<vector<int>> vec, int left, int right, int x)
    {

        if (right >= left)
        {
            int mid = left + (right - left) / 2;

            int value = vec[0][mid];

            if (vec[0][mid] == x)
                return mid;
            if (vec[0][mid] > x)
                return binarySearch(vec, left, mid - 1, x);
            return binarySearch(vec, mid + 1, right, x);
        }

        return -1;
    }
};

int main()
{
    Solution s;

    s.searchMatrix({{1, 3, 5}, {10, 11, 13}, {23, 30, 3460}}, 13);

    // cout << s.binarySearch({1,3,4,5}, 0, 3, 0) << '\n';
}