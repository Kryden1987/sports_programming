#include <iostream>
#include <string>
#include <vector>

int main()
  {
  std::string n;
  std::cin >> n;
  
  bool flag = true;  
  std::vector<int> vret;
  while (flag == true)
    {
    int ret=0;  
    flag = false;  
    for (auto &Char:n)
        {  
        if ( (Char-'0') > 0 )
           {
           flag = true;             
           ret  = 10*ret+1;
           Char = Char - 1;
           }
        else
           {
           ret = 10*ret;    
           }
        }
    if (ret!=0) { vret.emplace_back(ret); }
    }
  std::cout<<vret.size()<<std::endl; 
  for (auto x:vret)
      {
      std::cout<<x<<' ';    
      }
  std::cout<<std::endl;
  return 0;    
  }