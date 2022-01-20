#include <iostream>

int main() {
  int t;
  std::cin>>t;
  while(t--)
  {
    int a,b,c;
    std::cin>>a>>b>>c;
    int win;
    if(a>50)
    std::cout<<"A\n";
    else if(b>50)
    std::cout<<"B\n";
    else if(c>50)
    std::cout<<"C\n";
    else
    std::cout<<"NOTA\n";
  }
  return 0;
} 
