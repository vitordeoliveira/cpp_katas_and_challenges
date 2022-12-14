// 121. Best Time to Buy and Sell Stock
// Easy
// Companies
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

#include <vector>
#include <iostream>
#include <limits.h>
#include <map>

using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int max_diff = 0;
//         int diff = 0;
//         int index = 0;

//         for (int i = index; i < prices.size(); i++)
//         {
//             for (int y = (i + 1); y < prices.size(); y++)
//             {
//                 if(prices[i] < prices[y]) diff = prices[y] - prices[i];
//                 if(diff > max_diff) max_diff = diff;
//             }
//         }

//         return max_diff;
//     }
// };


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int profit_today = 0;
        int min = INT_MAX;
        int index = 0;

        for (int i = index; i < prices.size(); i++)
        {
            if(prices[i] < min) min = prices[i];

            profit_today = prices[i] - min;

            if(profit_today > profit) profit = profit_today;
        }

        return profit;
    }
};

int main()
{
    Solution s;

    std::vector<int> v = {1, 2, 6, 4};

    cout << s.maxProfit(v) << '\n';
}