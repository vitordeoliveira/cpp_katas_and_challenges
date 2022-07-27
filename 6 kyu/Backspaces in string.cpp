// Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"

// Your task is to process a string with "#" symbols.

// Examples
// "abc#d##c"      ==>  "ac"
// "abc##d######"  ==>  ""
// "#######"       ==>  ""
// ""              ==>  ""
#include <string>
#include <iostream>

// std::string cleanString(const std::string &s)
// {
//     std::string r;
//     int backspace = 0;
//     for (char &str : std::string(s.rbegin(), s.rend()))
//     {
//         if (str == '#')
//         {
//             backspace++;
//             continue;
//         }
//         else if (backspace > 0)
//         {
//             backspace--;
//             continue;
//         }
//         r += str;
//     }

//     return std::string(r.rbegin(), r.rend());
// }

std::string cleanString(const std::string &s)
{
    std::string r;

    for (auto x : s)
    {
        if (x != '#')
        {
            r.push_back(x);
        }
        else if(r.size() > 0)
        {
            r.pop_back();
        }
    }

    return r;
}

// std::string cleanString(std::string s)
// {
//     int counter = 0;
//     for (std::string::iterator it = s.begin(); it != s.end(); it++)
//     {
//         std::cout << it.base() << std::endl;
//     }

//     return s;
// }

int main()
{
    // cleanString("#9#OooooO");
    std::cout << cleanString("vitor#####S") << std::endl;
}