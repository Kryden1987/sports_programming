#include <string>
#include <iostream>

int main()
    {
    int w;
    std::cin>>w;
    std::string ret = ((w>2)&&(w%2==0))?"YES":"NO";
    std::cout<<ret<<std::endl;
    }