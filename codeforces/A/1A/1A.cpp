#include <iostream>

int main()
    {
    int n,m,a;
    std::cin>>n>>m>>a;
    auto uname = [](int x,int y){return static_cast<uint64_t>((x%y==0)?x/y:x/y+1);};
    uint64_t ret = uname(n,a)*uname(m,a);    
    std::cout<<ret<<std::endl;    
    }