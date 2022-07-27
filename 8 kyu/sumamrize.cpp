#include <iostream>

// int summation(int num)
// {
//     int sum = 0;
//     while (num)
//     {
//         sum += num;
//         num--;
//     }
//     return sum;
// }

// int summation(int num){
//  return num*(num+1)/2;
// }

int summation(int num){
 return num > 0 ? num + summation(num - 1) : 0;
}

int main()
{

    std::cout << summation(2) << std::endl;
}