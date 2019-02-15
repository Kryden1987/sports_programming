#include <iostream>
#include <vector>
#include <algorithm>

#define MAX (100001)

using u64 = uint64_t;

int main()
  {
  unsigned n;
  std::cin>>n;
  std::vector<u64> counter(MAX,0);
  u64 x;
  u64 maximum=0;
  for (unsigned i=0;i<n;i++)
      {
      std::cin>>x;
      counter[x]++;
      maximum=std::max(maximum,x);
      }
  u64 A   = 0;
  u64 B   = counter[1];
  u64 ret = 0;
  for (u64 i=2;i<=maximum;i++)
      {
      ret = std::max(B,A+counter[i]*i);
      A   = B;
      B   = ret;
      }
  std::cout<<ret<<std::endl;    
  return 0;
  }