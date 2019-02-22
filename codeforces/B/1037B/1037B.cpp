#include <iostream>
#include <vector>
#include <algorithm>

int main()
  {
  unsigned n;
  unsigned s;
  std::cin>>n>>s;
  std::vector<unsigned> v(n,0);
  for (auto &x:v)
      {
      std::cin>x;    
      }
  std::sort(v.begin(),v.end());
  unsigned median = v[(n-1)>>1];
  uint64_t ret=0;
  for (unsigned i=0;i<=median;i++)
      {
          
      }
  return 0;    
  }