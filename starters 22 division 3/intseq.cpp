#include <iostream>
int main() {
  int t;
  std::cin>>t;
  while(t--)
  {
    int k;
    std::cin>>k;
    int y = 0;
    while(k%2 == 0)
    {
      k/=2;
      ++y;
    }
  }
  return 0;
} 
