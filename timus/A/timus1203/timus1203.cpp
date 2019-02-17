#include <iostream>
#include <vector>

#define MAX   (30 001)

int main()
  {
  unsigned n;
  unsigned begin;
  unsigned end;
  std::cin>>n;

  unsigned ret=0;

  std::vector<unsigned> VectorBegin(MAX,0);
  std::vector<unsigned>   VectorEnd(MAX,0);

  for (unsigned i=0;i<n;i++)
      {
      std::cin>>begin>>end;
      VectorEnd[end] = std::max(VectorEnd[end],VectorBegin[begin-1]+1);
      }


  return 0;
  }

