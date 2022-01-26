#include <iostream>
int main()
{
  int t;
  std::cin>>t;
  while(t--)
  {
    int n,a;
    std::cin>>n>>a;
    if((n-a)>a) std::cout<<a<<'\n';
    else std::cout<<n-a<<'\n';
  }
}
