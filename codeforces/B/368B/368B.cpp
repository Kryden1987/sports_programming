#include <vector>
#include <iostream>

#define MAX (100001)

int main()
  {
  unsigned n;
  unsigned m;
  std::cin>>n>>m;
  std::vector<unsigned> count(MAX,0);
  std::vector<unsigned> v(n,0);
  for (auto &x:v)
      {
      std::cin>>x; 
      }
  count[v.back()] = 1;
  v.back()        = 1;
  unsigned temp;
  unsigned flag;
  for (auto i=v.rbegin();i!=v.rend()-1;i++)
      {
      temp =*(i+1);
      flag =(count[temp]==0)?1:0;
      *(i+1)=(*i)+flag;
      count[temp]++;
      }
  std::vector<unsigned> ret(m);    
  unsigned L;
  for (auto &x:ret)
      {
      std::cin>>L;
      x = v[L-1];
      }
  for (auto x:ret)
      {
      std::cout<<x<<"\n";    
      }
  return 0;    
  }