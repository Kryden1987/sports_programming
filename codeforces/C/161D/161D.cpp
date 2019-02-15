#include <vector>
#include <iostream>
#include <queue>

using Vector1D = std::vector<unsigned>;
using Tree     = std::vector<Vector1D>;
using Vector2D = std::vector<Vector1D>;




int main()
  {
  unsigned n;
  unsigned k;
  std::cin>>n>>k;
  Tree tree(n);
  unsigned x;
  unsigned y;
  for (unsigned i=0;i<(n-1);i++)
      {
      std::cin>>x>>y;    
      tree[x-1].emplace_back(y-1);
      tree[y-1].emplace_back(x-1);
      }
  Vector2D          L(n);
  Vector1D    Visit(n,0);
  std::queue<unsigned> q;  
  
  Visit[0] = 1;
  q.emplace(0);
  
  unsigned current;
  
  while (q.empty()==false)
    {
    current = q.front();
              q.pop();
              
    for (auto x:tree[current])
        {
        if (Visit[x] == 0)
           {
           q.emplace(x);    
           }
        }
    }
      
  return 0;    
  }