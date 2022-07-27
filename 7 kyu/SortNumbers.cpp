// Finish the solution so that it sorts the passed in array of numbers.
// If the function passes in an empty array or null/nil value then it should return an empty array.

// For example:

// sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}
// sortNumbers({}) // should return {}

#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

std::vector<int> solution(std::vector<int> nums)
{

    sort(nums.begin(), nums.end());
    return nums;
}

std::vector<int> solutionreverse(std::vector<int> nums)
{

    // sort(nums.rbegin(), nums.rend());
    // sort(nums.begin(), nums.end(), std::greater<int>());
    sort(nums.begin(), nums.end(), std::greater<>());

    return nums;
}

int main()
{
    std::vector<int> array = solution({1, 2, 3, 45, 0, 2});
    std::vector<int> arrayreverse = solutionreverse({1, 2, 3, 45, 0, 2});

    std::cout << "Sort" << std::endl;

    for (int i = 0; i < array.size(); ++i)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "-------------------" << std::endl;

    std::cout << "Reverse Sort" << std::endl;

    for (int i = 0; i < arrayreverse.size(); ++i)
    {
        std::cout << arrayreverse[i] << std::endl;
    }
}

// using namespace std;
// int main() {
//    vector<int> v = { 10, 9, 8, 6, 7, 2, 5, 1 };
//    cout<<"Elements before sorting"<<endl;
//    for (const auto &i: v)
//       cout << i << ' '<<endl;
//       cout<<"Elements after sorting"<<endl;
//       sort(v.begin(), v.end());
//    for (const auto &i: v)
//       cout << i << ' '<<endl;
//    return 0;
// }