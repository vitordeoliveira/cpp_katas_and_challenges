#include <string>
#include <iostream>
#include <vector>
#include <limits.h>
#include <cstdlib>
#include <algorithm>

auto get_lenght(std::vector<std::string> &a1)
{
    std::vector<int> lenght;
    for (auto x : a1)
    {
        lenght.push_back(x.size());
    }

    return lenght;
}

// auto mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
// {
//     std::vector<int> ia1 = get_lenght(a1);
//     std::vector<int> ia2 = get_lenght(a2);

//     int mina = *min_element(ia1.begin(), ia1.end());
//     int maxa = *max_element(ia1.begin(), ia1.end());

//     int minb = *min_element(ia2.begin(), ia2.end());
//     int maxb = *max_element(ia2.begin(), ia2.end());

//     int maxlg1 = abs(maxb - mina);
//     int maxlg2 = abs(maxa - minb);

//     return maxlg1 > maxlg2 ? maxlg1 : maxlg2;
// }

// auto mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
// {

//     if(a1.size() == 0 || a2.size() == 0 ) return -1;
//     const uint64_t MIN_INDEX = 0;
//     const uint64_t MAX_INDEX = 1;
//     uint64_t data[2][2] = {0, 0, 0, 0};

//     uint64_t min = INT_MAX;
//     uint64_t max = 0;
//     for (auto x : a1)
//     {
//         uint64_t t = x.size();
//         max = t > max ? t : min;
//         min = t < min ? t : min;
//         data[0][MAX_INDEX] = max;
//         data[0][MIN_INDEX] = min;
//     }

//     min = INT_MAX;
//     max = 0;
//     for (auto y : a2)
//     {
//         uint64_t t = y.size();
//         max = t > max ? t : max;
//         min = t < min ? t : min;
//         data[1][MAX_INDEX] = max;
//         data[1][MIN_INDEX] = min;
//     }

//     // for (size_t i = 0; i < 2; i++)
//     // {
//     //     for (size_t j = 0; j < 2; j++)
//     //     {
//     //         std::cout << data[i][j] << " | ";
//     //     }
//     //     std::cout << "\n---------\n";
//     // }

//     int dif1 = abs(data[0][0] - data[1][1]);
//     int dif2 = abs(data[0][1] - data[1][0]);

//     return dif1 > dif2 ? dif1 : dif2;
// }

using namespace std;
static bool compare(string &a, string &b)
{
    return (a.length() < b.length());
}

// static int mxdiflg(vector<string> &a1, vector<string> &a2)
// {
//     if (a1.empty() || a2.empty())
//         return -1;

//     vector<string>::iterator it_max1 = max_element(a1.begin(), a1.end(), compare);
//     vector<string>::iterator it_min1 = min_element(a1.begin(), a1.end(), compare);

//     vector<string>::iterator it_max2 = max_element(a2.begin(), a2.end(), compare);
//     vector<string>::iterator it_min2 = min_element(a2.begin(), a2.end(), compare);

//     int difference1 = it_max1->length() - it_min2->length();
//     int difference2 = it_max2->length() - it_min1->length();

//     return max(difference1, difference2);
// }

// int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
// {
//     double mx = -1;
//     for (auto x : a1)
//     {
//         for (auto y : a2)
//         {
//             double x1 = x.length(); double y1 = y.length();
//             double diff = std::abs(x1 - y1);
//             if (diff > mx)
//                 mx = diff;
//         }
//     }
//     return static_cast<int>(mx);
// }

int main()
{

    std::vector<std::string> s1 = {"oox", "q", "fdsfdsdfs"};
    std::vector<std::string> s2 = {"asdbfhfjfhfjfjfu"};

    // mxdiflg(s1, s2);
    std::cout << mxdiflg(s1, s2) << std::endl;

    // std::vector<int> v = {0, 1, 2, 3, 4, 5, 6};

    // auto f = [&v](int i){ return v[i] * 2; };
    // // auto g = [&v](int i) -> const int &
    // // { return v[i]; };

    // std::cout << f(3) << std::endl;
    // return 0;
}