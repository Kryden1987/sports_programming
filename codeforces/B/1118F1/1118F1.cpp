#include <iostream>
#include <vector>


using Vector = std::vector<int>;
using Tree   = std::vector<Vector>;



int main()
  {
  int n;
  std::cin>>n;
  Vector color(n,0);
  for (auto &x:color) { std::cin>>x; }
  Tree tree(n);
  int x;
  int y;
  for (int i=0;i<(n-1);i++)
      {
      std::cin>>x>>y;
      tree[x-1].emplace_back(y-1);
      tree[y-1].emplace_back(x-1);
      }
  Vector visit(n,0);
  Vector parent(n,0);
  Vector counter(n,0);
  
  current        = 0;
  visit[current] = 1;
  
  int Flag=0;
  
  while (visit[current]!=2)
        {
        auto index = counter[current]++;    
            
        if (index != tree[current].size()+1)
           {
           auto vertex = tree[current][index];
            
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
        
  return 0;    
  }