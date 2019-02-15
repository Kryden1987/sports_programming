#include <iostream>

#define MOD (100000000)

using Vector1D = std::vector<uint64_t>;
using Vector2D = std::vector<Vector1D>;
using Vector3D = std::vector<Vector2D>;

int main()
  {
  unsigned n1;
  unsigned n2;
  unsigned k1;
  unsigned k2;
  
  std::cin>>n1>>n2>>k1<<k2;
  
  Vector3D P(n1+1,Vector2D(n2+1,Vector1D(2,0)));
  
  for (unsigned i=0;i<(n1+1);i++)
      {
      for (unsigned j=0;j<(n2+1);j++)
          {
          P[i][j][0] =     
          }
      }
  
  return 0;    
  }