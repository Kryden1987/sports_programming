#include <iostream>
#include <vector>
#include <queue>

using Vector = std::vector<unsigned>;
using Tree   = std::vector<Vector>;

int main()
  {
  unsigned  n;
  std::cin>>n;
  Vector p(n,0);
  std::vector<int> s(n,0);
  
  Tree tree(n);
  
  for (unsigned i=1;i<n;i++)
      {
      std::cin>>p[i];
      tree[p[i]].emplace_back(i);
      }
  for (auto &x:s)
      {
      std::cin>>x;    
      }
  
  Vector visit(n,0);
  Vector     a(n,0);
  
  visit[0] = 1;
  a[0]  = s[0];
  
  auto current = 0;
  
  while (visit[current]!=2)
        {
        auto index  = counter[current]++;
        

        if (current!=0)
           {
           if (s[current]!=-1)
              {
              if s[current]>=s[p[p[current]]])    
              }
           }
           
        if (index != g[current].size()+1)
           {
           auto vertex = g[current][index];
            
           if (visit[vertex]==0)
              {
              visit[vertex]  = 1;    
              parent[vertex] = current;
              current        = vertex;
              }            
            }
        else
            {
            visit[current] = 2; 
            current        = parent[current]; 
            }
        }
  
  }