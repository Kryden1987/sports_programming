#include <iostream>
#include <vector>

using Vector = std::vector<uint64_t>;

#define MAX (501)

int main()
  {
  unsigned n;
  std::cin>>n;

  std::vector<Vector> P(MAX,Vector(n,0));

  P[3][2] = 1;
  P[4][3] = 1;
  P[5][3] = 1;
  P[5][4] = 1;

  for (unsigned i=1;i<MAX;i++)
      {
      for (unsigned j=i+1;j<(MAX-i);j++)
          {
          P[i+j][j]+=
          }
      }

  uint64_t ret=0;

  for (unsigned i=n-1; i>(n>>1);i--)
      {
      ret+=P[n-i];
      std::cout<<ret<<std::endl;
      }


  std::cout<<ret<<std::endl;
  }
