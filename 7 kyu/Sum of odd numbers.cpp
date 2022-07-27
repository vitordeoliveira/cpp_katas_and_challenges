// Given the triangle of consecutive odd numbers:

//              1
//           3     5
//        7     9    11
//    13    15    17    19
// 21    23    25    27    29
// ...
// Calculate the sum of the numbers in the nth row of this triangle (starting at index 1) e.g.: (Input --> Output)

// 1 -->  1
// 2 --> 3 + 5 = 8

// Solution 1
// the edges have a pattern
// 1 - 3 - 7 - 13 - 21
// 2,4,6,8

// Solution 2
// 1 8 27 64 125
// 7, 19, 37, 61
// 12, 18, 24,
// 4, 6

// Solution 3
// pow(n,3);

#include "../Katas.h"

// long long rowSumOddNumbers(unsigned n)
// {
//     int sum = 1;
//     int prev = 1;

//     for (size_t i = 1; i < n; i++)
//     {
//         prev += (2 * (3 * i));
//         sum += prev;
//     }

//     return sum;
// }

long long rowSumOddNumbers(unsigned n)
{
    return n*n*n;
}

int main()
{
    std::cout << rowSumOddNumbers(4) << std::endl;
}