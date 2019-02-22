#include <iostream>



int main()
  {
  unsigned  n;
  std::cin>>n;
  int previous;
  int current;
  std::cin>>previous;
  int64_t ret=std::abs(previous);
  for (unsigned i=1;i<n;i++)
      {
      std::cin>>current;
      ret+=std::abs(previous-current);
      previous=current;  
      }
  std::cout<<ret<<std::endl;   
  return 0;    
  }