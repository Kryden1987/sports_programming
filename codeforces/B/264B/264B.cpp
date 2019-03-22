#include <iostream>
#include <vector>


int gcd(int a,int b)
  {
  while (b)
    {
    a%=b;
    std::swap(a,b);
    }
  return a;
  }


int main()
  {
  int n;
  std::cin>>n;
  

  
  return 0;    
  }
