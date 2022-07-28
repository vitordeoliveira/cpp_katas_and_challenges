
// Simple, remove the spaces from the string, then return the resultant string.

#include <basic.h>

std::string no_space(std::string s)
{
  s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
   return s;
}


int main()
{

    std::cout << no_space("vitor\n");


}