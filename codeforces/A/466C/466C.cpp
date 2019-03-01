#include <iostream>
#include <vector>



int main()
  {
  unsigned n;
  std::cin>>n;
  std::vector<int> v(n,0);
  int S=0;
  for (auto &x:v)
      {
      std::cin>>x;
      S+=x;
      }
  unsigned ret=0;
  std::vector<unsigned>    Counter(n,0);
  std::vector<unsigned> SumCounter(n,0);
  if (S%3==0)
     {
     int PartialSum = 0;
  
     for (int i=(n-1);i>0;i++)
         {
         PartialSum+=v[i];    
         
         if (PartialSum == S/3)
            {
            SumCounter[i] += 1;
            }
         if (S - PartialSum == S/3)
            {
            Counter[i-1] = 1;    
            }
         }
     for (int i=0;i<(n-2);i++)
         {
             
             
         }
     }
     
  std::cout<<ret<<std::endl;
  return 0;
  }
