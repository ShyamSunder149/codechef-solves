#include <iostream>
#include <cmath>
int main()
{
  int t;
  std::cin>>t;
  while(t--)
  {
    int n,a = 0;
    std::cin>>n;
    for(int i=0;i<n;++i)
    {
      if(a==26) a=0;
      std::cout<<char(a+97);
      ++a;
    }
    std::cout<<'\n';
  }
}
