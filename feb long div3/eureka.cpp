#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<ll> vl; 
typedef vector<vl> vvl; 
#define pb push_back;
#define rep(n) for(int i=0;i<n;++i)
#define fr(a,b) for(int i=a;i<b;++i)
#define all(v) v.begin(), v.end()  
#define size(v) (int)v.size() 
#define sort(v) sort(all(v)) 
#define reverse(v) reverse(all(v))  

void nitro()
{
    int n;
    cin>>n;
    float ans = pow((0.143*n),n);
    if((ans-floor(ans))<0.5) cout<<floor(ans)<<'\n';
    else cout<<floor(ans)+1<<'\n';
}

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int32_t main()
{
    c_p_c();
    int t;
    cin>>t;
    while(t--)
    {
        nitro();
    } 
    return 0;
}
