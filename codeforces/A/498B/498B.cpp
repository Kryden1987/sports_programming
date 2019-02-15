#include <iostream>
#include <vector>

#define MAX  (101)

int main()
  {
  unsigned  n;
  unsigned  m;
  std::cin>>n;
  std::vector<int> b(MAX,0);
  unsigned  x;

  for (unsigned i=0;i<n;i++)
      {
      std::cin>>x;
      b[x]++; 
      }
  std::cin>>m;
  unsigned ret=0;
  for (unsigned i=0;i<m;i++)
      {
      std::cin>>x;    
      if (b[x] > 0) 
         {
         b[x]--;
         ret++;
         }
      else 
         {
         b[x]-=1;    
         }
      }    

  for (unsigned i=0;i<MAX;i++)
      {  
      if ( (b[i]>0) && (b[i+1]<0) )
         {
         ret+=std::min(std::abs(b[i]),std::abs(b[i+1]));
         
         if (b[i] >= std::abs(b[i+1]))
            {
            b[i+1]=0;    
            }
         else
            {
            b[i+1]+=b[i];    
            }  
         }
      else if ( (b[i]<0) && (b[i+1]>0) )
         {
         ret+=std::min(std::abs(b[i]),std::abs(b[i+1]));
         if (b[i+1] > std::abs(b[i]))
            {
            b[i+1]+=b[i];    
            }
         else
            {
            b[i+1]=0;    
            }
         }
      }
  std::cout<<ret<<std::endl;
  return 0;    
  }