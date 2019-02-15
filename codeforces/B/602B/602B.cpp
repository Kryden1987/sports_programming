#include <iostream>


int main()
  {
  unsigned n;
  int      Current;
  int      Previous;
  int      Delta         = 0;
  unsigned DeltaPosition = 0;
  unsigned Length        = 1;
  
  unsigned ret           = 1;
  int      temp          = 0;
  
  std::cin>>n;
  std::cin>>Previous;
  
  for (unsigned i=1;i<n;i++)
      {
      std::cin>>Current;
      
      if (Current == Previous)
         {
         Length++;    
         }
      else
         {
         temp = Current-Previous;
      
         if (temp!=Delta)
            {
            Length++;    
            }
         else
            {
            ret    = std::max(Length,ret);
            Length = i - DeltaPosition+1;
            }
         Delta         = temp;   
         DeltaPosition = i;   
         }
      Previous = Current;
      }
  ret = std::max(Length,ret);    
  std::cout<<ret<<std::endl;    
  return 0;    
  }