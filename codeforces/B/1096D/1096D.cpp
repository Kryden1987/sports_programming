#include <iostream>
#include <string>
#include <vector>


int main()
  {
  unsigned n;
  std::cin>>n;
  std::string s;
  std::cin>>s;
  std::vector<int> v(n,0);
  for (auto &x:v)
      {
      std::cin>>x;
      }

  }
