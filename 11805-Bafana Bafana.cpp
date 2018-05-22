#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j, k, l=0, a, b, c;
    cin>>t;
    while(t--)
    {
        l++;
        cin>>a>>b>>c;
        k=((c%a)+(b%a))%a;
        if(k==0) k = a;
        cout<<"Case "<<l<<": "<<k<<endl;
    }
    return 0;
}
