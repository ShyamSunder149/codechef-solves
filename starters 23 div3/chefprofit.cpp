#include<iostream>
int main() {
   int t = 1; std::cin >> t;
   while(t--){
   		int x,y,z;
   		std::cin>>x>>y>>z;
   		std::cout<<(x*z)-(x*y)<<'\n';
   }
   return 0;
}
