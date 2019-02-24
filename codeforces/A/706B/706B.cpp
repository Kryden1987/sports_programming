#include <iostream>
#include <vector>
#include <algorithm>

int main()
  {
  unsigned n;
  std::cin>>n;
  std::vector<unsigned> v(n,0);
  for (auto &x:v)
      {
      std::cin>>x;
      }
  std::sort(v.begin(),v.end());
  unsigned q;
  std::cin>>q;

  unsigned money;
  std::vector<unsigned> ret(q,0);
  for (unsigned i=0;i<q;i++)
      {
      std::cin>>money;
      ret[i]=std::distance(v.begin(),std::lower_bound(v.begin(),v.end(),money+1));
      }
  for (auto &x:ret)
      {
      std::cout<<x<<std::endl;
      }
  }
