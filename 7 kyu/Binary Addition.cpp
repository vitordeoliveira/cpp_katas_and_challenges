// Implement a function that adds two numbers together and returns their sum in binary. The conversion can be done before, or after the addition.

// The binary number returned should be a string.

// Examples:(Input1, Input2 --> Output (explanation)))

// 1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
// 5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)

#include <cstdint>
#include <string>
#include <iostream>
#include <bitset>
#include <sstream>

// std::string add_binary(uint64_t a, uint64_t b)
// {
//     return std::to_string(stoi(std::bitset<16>(a+b).to_string()));
// }

// std::string add_binary(uint64_t a, uint64_t b)
// {
//     std::string binary = std::bitset<128>(a + b).to_string();
//     std::stringstream sa(binary);

//     unsigned long long x = 0;
//     sa >> x;

//     return std::to_string(x);
// }

// std::string add_binary(uint64_t a, uint64_t b) {
//     std::string r;
//     auto n = a + b;
//     while (n != 0)
//     {
//         r = (n % 2 == 0 ? "0" : "1") + r;
//         n = n / 2;
//     }
//     return r == "" ? "0": r;
// }

std::string add_binary(uint64_t a, uint64_t b)
{
    std::string bi = std::bitset<64>((a + b)).to_string();
    return bi.erase(0, std::min(bi.find_first_not_of('0'), bi.size() - 1));
}

int main()
{
    std::cout << add_binary(0, 2174483647) << std::endl;
}