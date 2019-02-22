#include <iostream>
#include <vector>

#define MAX (5001)

int main()
  {
  int n;
  std::cin>>n;
  std::vector<unsigned> v(MAX,0);
  unsigned x;
  for (unsigned i=0;i<n;i++)
      {
      std::cin>>x;
      v[x]++;
      }
  unsigned ret=0;
  for (unsigned i=1;i<=n;i++)
      {
      if (v[i]!=0) ret++;
      }
  std::cout<<(n-ret)<<std::endl;    
  return 0;    
  }