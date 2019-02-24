#include <string>
#include <iostream>
#include <vector>

int main()
  {
  std::string s;
  std::cin>>s;
  std::vector<unsigned> ans(s.size(),0);
  for (unsigned i=0;i<(s.size()-1);i++)
      {
      if (s[i]==s[i+1]) ans[i+1]=ans[i]+1;
      else              ans[i+1]=ans[i];
      }
  unsigned m;
  std::cin>>m;
  std::vector<unsigned> ret(m,0);
  unsigned Left;
  unsigned Right;
  for (unsigned i=0;i<m;i++)
      {
      std::cin>>Left>>Right;
      ret[i]=ans[Right-1]-ans[Left-1];
      }
  for (auto &x:ret)
      {
      std::cout<<x<<std::endl;
      }
  }
