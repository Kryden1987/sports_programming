#include <vector>
#include <iostream>
#include <algorithm>








int main()
  {
  unsigned n;
  std::cin>>n;
  std::vector<int> v(n,0);
  std::vector<int64_t> SimpleSumm(n,0);
  std::vector<int64_t>   SortSumm(n,0);
  int x;
  std::cin>>v[0];
  for (unsigned i=1;i<n;i++)
      {
      std::cin>>x;
      v[i] = x;
      SimpleSumm[i]=SimpleSumm[i-1]+x;
      }
  auto copy = v;    
  std::sort(copy.begin(),copy.end());
  SortSumm[0]=copy[0];
  for (unsigned i=1;i<n;i++)
      {
      SortSumm[i]=SortSumm[i-1]+copy[i];
      }
  unsigned m;
  std::cin>>m;
  std::vector<uint64_t> Ret(m);
  int L;
  int R;
  int T;
  for (unsigned i=0;i<m;i++)
      {
      std::cin>>T>>L>>R;
      if (T==1)
         {
         Ret[i] = SimpleSumm[R-1]-SimpleSumm[L-1]+v[L-1];    
         }
      else
         {
         Ret[i] = SortSumm[R-1]-SortSumm[L-1]+copy[L-1];     
         }
      }
  for (auto x:Ret)
      {
      std::cout<<x<<std::endl;    
      }  
  }