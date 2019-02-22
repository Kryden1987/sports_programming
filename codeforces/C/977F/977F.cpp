#include <iostream>
#include <vector>
#include <utility>
#include <map>

using Info=std::pair<unsigned,unsigned>;

#define 

int main()
  {
  unsigned n;
  std::cin>>n;
  std::map<unsigned,unsigned> v;
  for (auto &x:v)
      {
      std::cin>>x;    
      
      if (v.find(x-1) == v.end())
         {
         v[x]=1;    
         }
      else
         {
         v[x] = 
             
         }     
      }
      
  return 0;    
  }