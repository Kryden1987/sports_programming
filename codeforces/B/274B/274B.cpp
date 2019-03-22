#include <iostream>
#include <vector>

using Vector = std::vector<int>;
using Tree   = std::vector<Vector>;


int main()
  {
  int n;
  std::cin>>n;
  
  Tree tree(n);
  
  int x;
  int y;
  
  for (int i=0;i<(n-1);i++)
      {
      std::cin>>x>>y;
      tree[x-1].emplace_back(y-1);
      tree[y-1].emplace_back(x-1);
      }
  Vector weight(n);
  
  for (auto &x:weight)
      {
      std::cin>>x;    
      }
  
  Vector visit(n,0);
  Vector parent(n,0);
  Vector counter(n,0);
  Vector summ(n,0);
  
  auto current = 0;
  
  visit[current] = 1;
  
  unsigned ret=0;
  
  while (visit[current]!=2)
    {
    auto index  = counter[current]++;
          
    if (index != tree[current].size())
       {
       auto vertex = tree[current][index];
            
       if (visit[vertex]==0)
          {
          visit[vertex]  = 1;    
          parent[vertex] = current;
          summ[parent[vertex]]+=weight[vertex];
          current        = vertex;
          }            
       }
    else
       {
       visit[current] = 2; 
       ret+=std::abs(weight[current]-summ[current]);
       current        = parent[current]; 
       }    
    }
  std::cout<<ret<<std::endl;
  return 0;    
  }
