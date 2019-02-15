#include <iostream>
#include <vector>

#define MAX (100001)
#define MOD (1000000007)

using Vector = std::vector<unsigned long long>;

struct Getter
  {
  Getter(unsigned t,unsigned k):t(t),k(k),v(Vector(MAX,0)),s(Vector(MAX,0))
   {
   v[0]=0;
   v[k]=2;
   start();
   }
      
  unsigned operator()(unsigned a,unsigned b)
    {
        
    }
  
  void start(void)
    {
    for (unsigned i=1;i<MAX-k;i++)
        {
        v[i+k]=v[i  ]%MOD+v[i+k-1]%MOD;
        s[i  ]=s[i-1]    +v[i    ]%MOD;
        }
    }
  unsigned t;
  unsigned k;  
  std::vector<unsigned> v;  
  std::vector<unsigned> s; 
  };


int main()
  {
  unsigned t;
  unsigned k;
  std::cin>>t>>k;
  std::vector<unsigned> ret(t,0);
  for (unsigned i=0;i<t;i++)
      {
      unsigned a;
      unsigned b;
      std::cin>>a>>b;
      }
      
      
      
  return 0;    
  }