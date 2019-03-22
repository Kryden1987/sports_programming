#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>



int main()
  {
  int n;
  std::cin>>n;
  
  std::vector<std::pair<int,int>> v(n,0);
  
  for (int i=0;i<n;i++)
      {
      std::cin>>v[i].first;
      v[i].second      = i;
      }
  std::sort(v.rbegin(),v.rend());
  
  
  return 0;    
  }



