#include <iostream>
int main()
{
  int t;
  std::cin>>t;
  while(t--)
  {
    int x,y,z;
    std::cin>>x>>y>>z;
    if(x>=y) std::cout<<"PIZZA\n";
    else if(x>=z) std::cout<<"BURGER\n";
    else std::cout<<"NOTHING\n";
  }
  return 0;
}
