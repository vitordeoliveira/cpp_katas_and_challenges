#include <iostream>
#include <string>
#include <sstream>

#include <string>

// std::string sum_str(const std::string &a, const std::string &b)
// {
//     return std::to_string(stoi(a) + stoi(b));
// }

// std::string sum_str(const std::string &a, const std::string &b)
// {
//     return std::to_string((a.empty() ? 0 : std::stoi(a)) + (b.empty() ? 0 : std::stoi(b)));
// }

// std::string sum_str(const std::string& a, const std::string& b) {
//   return std::to_string(std::stoi(a == "" ? "0" : a) + std::stoi(b == "" ? "0" : b));
// }

// std::string sum_str(const std::string &a, const std::string &b)
// {
//     std::stringstream geek(a);
//     std::stringstream geek2(b);

//     int x = 0;
//     int y = 0;
//     geek >> x;
//     geek2 >> y;
//     return std::to_string(x + y);
// }

std::string sum_str(const std::string &a, const std::string &b)
{
    std::stringstream sa(a), sb(b);

    int x, y = 0;
    sa >> x;
    sb >> y;
    return std::to_string(x + y);
}

int main()
{
    std::cout << sum_str("6", "1");

    return 0;
}