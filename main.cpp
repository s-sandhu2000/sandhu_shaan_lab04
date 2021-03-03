#include <iostream>
#include "operators.hpp"
using namespace std;

int main()
{
   char const* THIS = "2.9Shaan";
   cout<<readFloat(THIS, &THIS)<<endl;
   throw std::invalid_argument("error!");
}

