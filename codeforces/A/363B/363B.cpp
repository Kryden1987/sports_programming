#include <iostream>
#include <vector>

int main()
  {
  unsigned n;
  unsigned k;
  std::cin>>n>>k;
  unsigned h;
  unsigned ret      = 0;
  unsigned current  = 0;
  unsigned position = 1;
  std::vector<unsigned> v(k,0);
  for (auto &x:v)
      {
      std::cin>>x;  
      ret+=x;
      }
  unsigned min = ret;
  for (unsigned i=k;i<n;i++)
      {
      std::cin>>current;
      if (min > ret+current-v[(i-k)%k])
         {
         min = ret+current-v[(i-k)%k];    
         position = i-k+2;
         }
      ret    = ret+current-v[(i-k)%k];
      v[(i-k)%k] = current;   
      }
  std::cout<<position<<std::endl;    
  return 0;    
  }
