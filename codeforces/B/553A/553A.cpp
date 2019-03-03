#include <iostream>
#include <vector>


int main()
  {
  unsigned k;
  std::cin>>k;
  std::vector<unsigned> v(k,0);
  for (auto &x:v)
      {
      std::cin>>x;
      }


  return 0;
  }
