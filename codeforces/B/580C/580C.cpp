#include <iostream>
#include <vector>
#include <queue>

using Vector  = std::vector<unsigned>;
using Graph   = std::vector<Vector>;

struct BreadthFirstSearch
  {
  BreadthFirstSearch(unsigned n,unsigned m):graph(Graph(n)),visit(Vector(n,0)),a(Vector(n,0)),ret(Vector(n,0)),m(m){}
  unsigned operator()(unsigned start)
    {
    std::queue<unsigned>  q;
    q.push(start);
    visit[start] = 1;
    unsigned out = 0;
    ret[start]+=a[start];

    while (q.empty()==false)
       {
       auto current = q.front();
                      q.pop();
       for (auto x: graph[current])
           {
           if (visit[x]==0)
              {
              if   (a[x] == 0) {ret[x]=0;             }
              else             {ret[x]=ret[current]+1;}
              if (ret[x] <= m)
                 {
                 q.push(x);
                 visit[x]=1;
                 if (IsList(x)) { out++; }
                 }
              }
           }
       }
    return out;
    }
  bool IsList(unsigned v)
    {
    return (graph[v].size()==1);
    }

  unsigned m;
  Vector ret;
  Vector a;
  Vector visit;
  Graph  graph;
  };

int main()
  {
  unsigned n;
  unsigned m;
  std::cin>>n>>m;

  BreadthFirstSearch bfs(n,m);

  for (auto &x:bfs.a) { std::cin>>x; }

  for (int i=0;i<(n-1);i++)
      {
      unsigned x;
      unsigned y;
      std::cin>>x>>y;
      bfs.graph[x-1].emplace_back(y-1);
      bfs.graph[y-1].emplace_back(x-1);
      }
  std::cout<<bfs(0)<<std::endl;
  return 0;
  }

