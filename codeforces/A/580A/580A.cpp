#include <iostream>


int main()
  {
  unsigned n;
  std::cin>>n;
  int current;
  int previous=0;
  int ret     =0;
  int count   =0;
  for (unsigned i=0;i<n;i++)
      {
      std::cin>>current;    
      if (current>=previous) { count++;          }
      else { ret = std::max(ret,count); count=1; }
      previous=current;    
      }
  ret = std::max(ret,count);
  std::cout<<ret<<std::endl;    
  return 0;    
  }