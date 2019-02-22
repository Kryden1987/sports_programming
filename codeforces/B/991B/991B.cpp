#include <iostream>
#include <vector>


int main()
  {
  unsigned n;
  unsigned x;
  unsigned max = 9*n*n;
  unsigned sum = 0;
  unsigned ret = 0;
  unsigned N[5] = {0};
  
  for (unsigned i=0;i<n;i++)
      {
      std::cin>>x;    
      N[x]++;
      sum+=x;
      }
  sum<<=1;    
  if (max > sum)
     {
     auto temp = (max-sum)/3;
     if  (temp > N[2])
         {
         ret+=3*N[2];   
         sum+=3*N[2];
         }
         
     temp = (max-sum)/2;
  
     if (
     }
  
  
  return 0;    
  }