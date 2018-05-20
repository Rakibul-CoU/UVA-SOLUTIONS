#include<bits/stdc++.h>
using namespace std;
int bm(int b, int p, int m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        int t;
        t=bm(b, p/2, m);
        return ((t%m)*(t%m))%m;
    }
    else
    {
        long long int t;
        t=bm(b, p-1, m);
        return ((t%m)*(b%m))%m;
    }
}
int main()
{
    int p, m, a, b, c, i;
    while(cin>>b>>p>>m)
        cout<<bm(b,p,m)<<endl;
    return 0;
}
