#include <iostream>
#include <string>
#include <vector>

int main()
  {
  std::string s;
  std::cin>>s;
  
  std::vector<unsigned> balance(s.size(),0);
  
  char     Char;
  unsigned Count = 0;
  for (auto i=0;i<s.size();i++)
      {
      balance[i] = (s[i]=='(')?++count:--count;
      }
      
  return 0;    
  }