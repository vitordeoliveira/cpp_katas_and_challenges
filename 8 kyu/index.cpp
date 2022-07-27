#include <string>
#include <iostream>

// std::string fakeBin(std::string str){
//   std::string bin = "";
//   for(std::string::size_type i=0; i < str.size(); i++){
//     bin = bin + (((int)str[i]-48 < 5) ? "0" : "1" );
//   }

//   return bin;
// }

// std::string fakeBin(std::string str){
//   for (auto &s : str)
//   {
//     s = s < '5'?'0':'1';
//   }
//   return str;
// }

// std::string fakeBin(std::string str)
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         str[i] = ((str[i] < '5') ? '0' : '1');
//     }

//     return str;
// }

std::string fakeBin(std::string str)
{
    for (char &s : str)
    {
        s = s < '5' ? '0' : '1';
    }
    return str;
}

int main()
{
    std::cout << fakeBin("123987");
}