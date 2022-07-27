// Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

// Examples
// "This is an example!" ==> "sihT si na !elpmaxe"
// "double  spaces"      ==> "elbuod  secaps"

#include <string>
#include <vector>
#include <iostream>
// #include <algorithm>

std::vector<std::string> split(std::string str, const std::string delimiter = " ")
{
    std::vector<std::string> r;
    std::string token;
    size_t pos = 0;

    while ((pos = str.find(delimiter)) != std::string::npos)
    {
        token = str.substr(0, pos);
        r.push_back(token);
        str.erase(0, pos + delimiter.length());
    }
    r.push_back(str);
    return r;
}

// std::string reverse_words(std::string str)
// {
//     std::vector<std::string> splited_string = split(str);
//     std::string r;

//     for (std::string x : splited_string)
//     {
//         r += std::string(x.rbegin(), x.rend());
//     }

//     return r;
// }

// std::string reverse_words(std::string str)
// {

//     int index = 0;
//     int pos = 0;
//     int vec = 0;
//     std::vector<std::string> splited_string = split(str);
//     int size = str.size();
//     for (auto x : str)
//     {
//         if (x == ' ' || size-1 == index)
//         {
//             str.replace(pos, splited_string[vec].size(), std::string(splited_string[vec].rbegin(), splited_string[vec].rend()));
//             pos = index + 1;
//             vec++;
//         }
//         index++;
//     }

//     return str;
// }

// std::string reverse_words(std::string str)
// {
//     int pos = 0;
//     int index = 0;
//     int word_size = 0;
//     std::string reverse_word;
//     str += "  ";

//     for (auto &x : str)
//     {
//         (void)x;
//         index++;
//         std::string next_letter = str.substr(index, 1);
//         if (next_letter == " ")
//         {
//             word_size = index - pos;
//             std::string word = str.substr(pos, word_size);
//             reverse_word += std::string(word.rbegin(), word.rend()) + " ";
//             pos = index+1;
//         }
//     }

//     reverse_word.pop_back();
//     reverse_word.pop_back();
 
//     return reverse_word;
// }


// std::string reverse_words(std::string str)
// {
//   std::string out;
//   std::string cword;
//   for (char c : str) {
//     if (c == ' ') {
//       out += cword;
//       out += c;
//       cword = "";
//       continue;
//     }
//     cword = c + cword;
//   }
//   out += cword;
//   return out;
// }

std::string reverse_words(std::string str)
{
  std::string cword;
  for (char c : str) {
    cword = c + cword;
  }
  return cword;
}

int main()
{
    std::cout << reverse_words("vi qu") << std::endl;
    return 0;
}