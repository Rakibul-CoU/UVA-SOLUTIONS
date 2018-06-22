#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, i, j, k, l;
    while(1)
    {
        k=0;
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        for(i=n; i<=m; i++)
        {
            l=sqrt(i);
            if(l*l == i)
            {
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
