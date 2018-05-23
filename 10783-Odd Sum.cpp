#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j, k=0;
    cin>>t;
    while(t--)
    {
        int sum=0;
        k++;
        cin>>n>>m;
        for(i=n; i<=m; i++)
        {
            if(i%2!=0)
            {sum+=i;}
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
    }
    return 0;
}
