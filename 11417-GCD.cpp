#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int i,j,sum,n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;

        sum=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                sum+=gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
