// Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.

// Write a function which takes a list of strings and returns each line prepended by the correct number.

// The numbering starts at 1. The format is n: string. Notice the colon and space in between.

// Examples: (Input --> Output)

// [] --> []
// ["a", "b", "c"] --> ["1: a", "2: b", "3: c"]

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

// std::vector<std::string> number(const std::vector<std::string> &lines)
// {
//     std::vector<std::string> cp;
//     unsigned i = 0;
//     for (auto x : lines)
//     {
//         ++i;
//         cp.push_back(std::to_string(i) + ": " + x);
//     }
//     return {cp};
// }

// std::vector<std::string> number(const std::vector<std::string> &lines)
// {
//     std::vector<std::string> cp;
//     unsigned i = 0;
//     for (auto x : lines)
//     {
//         ++i;
//         std::stringstream str;
//         str << i << ": " << x;
//         cp.push_back(str.str());
//     }
//     return cp;
// }

// std::vector<std::string> number(const std::vector<std::string> &lines) {
//   std::vector<std::string>res;
//   std::transform(lines.begin(),lines.end(),std::back_inserter(res),
//                 [n=1](auto &l) mutable {
//                     return std::to_string(n++)+": "+l;
//                 });
//   return res;
// }

int main()
{

    for (auto x : number({"a", "b", "c"}))
        std::cout << x << std::endl;
}