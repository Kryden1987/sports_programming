#include <iostream>


int main()
  {
  unsigned n;
  std::cin>>n;
  unsigned x;
  unsigned ret;

  unsigned one  = 0;
  unsigned zero = 0;

  int MaxBalance=0;

  for (unsigned i=0;i<n;i++)
      {
      std::cin>>x;
      if (x==1) one++;
      else      zero++;

      MaxBalance = std::max(zero-one,MaxBalance);
      }
  std::cout<<ret<<std::endl;
  return 0;
  }
