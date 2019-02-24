#include <iostream>
#include <vector>



int main()
  {
  unsigned n;
  std::cin>>n;
  std::vector<int> v(n,0);
  int S=0;
  for (auto &x:v)
      {
      std::cin>>x;
      S+=x;
      }
  unsigned ret=0;
  if (S%3==0)
     {

     }
  std::cout<<ret<<std::endl;
  return 0;
  }
