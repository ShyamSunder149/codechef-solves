#include <iostream>

int main()
{
    int t=0;
    std::cin>>t;
    while(t--)
    {
        int n,k,x,c = 0;
        std::cin>>x>>n>>k;
        if(k > n) std::cout<<"-1\n";
        else
        {
            c = 0;
            for(int i=0;i<x;++i)
            {
                if(c == k) c = 0;
                std::cout<<c<<' ';
                ++c;
            }
            std::cout<<'\n';
        }
        
    }
    return 0;
}
