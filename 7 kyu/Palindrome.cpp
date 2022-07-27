#include <string>
#include <iostream>
#include <algorithm>
// Write a function that checks if a given string (case insensitive) is a palindrome.

// bool isPalindrom(const std::string &str)
// {

//   int ref = str.size() - 1;

//   for (auto &c : str)
//   {
//     if (tolower(c) != tolower(str.at(ref)))
//     {
//       return false;
//     }
//     ref--;
//   }

//   return true;
// }

// bool isPalindrom (const std::string& str)
// {
  
//   int ref = str.size() - 1;

//   for (auto &c : str)
//   {
//     if (tolower(c) != tolower(str.at(ref))) return false;
//     ref--;
//   }

//   return true;
// }

std::string reverse(std::string str)
{
  std::string cword;
  for (char c : str) {
    cword = c + cword;
  }
  return cword;
}

bool isPalindrom(const std::string &str)
{
  return str == reverse(str);
}

// bool isPalindrom(const std::string &str)
// {
//   std::string lstr = str;
//   for (char &c : lstr)
//     c = toupper(c);
//   return lstr == std::string(lstr.rbegin(), lstr.rend());
// }


int main()
{
  // std::string test = "Hello";
  // std::cout << std::string(test.rbegin(), test.rend()) << std::endl;
  // std::cout << *test.rbegin() << std::endl;
  // std::cout << *(test.rend()-1)<< std::endl;

  std::string test = "Hello";

  std::cout << isPalindrom("heehd") << std::endl;

}