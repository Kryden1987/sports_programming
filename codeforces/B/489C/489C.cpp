#include <iostream>
#include <string>







int main()
  {
  unsigned n;
  unsigned summ;
  std::cin>>n>>summ;
  
  std::string RetMax;
  std::string RetMin;

  if (summ>=9*n)
     {
     RetMin="-1";
     RetMax="-1";
     }
  else
     {
     auto temp = std::string(summ/9,'9');
     RetMin += temp;
     RetMax += temp;
     n      -= summ/9;
     summ   %= 9;

     if (summ!=0)
        {
        RetMax+=std::to_string(summ);

        }

     }

  std::cout<<RetMin<<' '<<RetMax<<std::endl;
  return 0;    
  }
