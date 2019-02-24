#include <iostream>

int main()
  {
  unsigned n;

  std::cin>>n;

  int CurrentLeft  = 0;
  int CurrentRight = 0;

  int PreviousLeft  = 0;
  int PreviousRight = 0;

  int ret = 0;
  int temp;

  for (unsigned i=0;i<n;i++)
      {
      std::cin>>CurrentLeft>>CurrentRight;

      temp = std::min(CurrentLeft,CurrentRight)-std::max(PreviousLeft,PreviousRight);

      if (temp != 0)
         {
         ret += std::max(0,temp+1);
         }

      PreviousLeft  = CurrentLeft;
      PreviousRight = CurrentRight;
      }

  std::cout<<(ret+1)<<std::endl;
  return 0;
  }

