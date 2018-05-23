#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, t, i, j, k, l;
    while(1)
    {
        cin>>t;
        if(t==0)
        {
            break;
        }
        k=0;
        while(1)
        {
            while(t!=0)
            {
                k=k+(t%10);
                t=t/10;
            }
            if(k/10==0)
                break;
            else
            {
                t=k;
                k=0;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
