#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, n, m, a, b, c, e;
    while(1){
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0)
    {
        break;
    }
    l=a*a;
    n=b*b;
    m=c*c;
    if((l+n)==m)
        cout<<"right"<<endl;
    else if((l+m)==n)
        cout<<"right"<<endl;
     else if((n+m)==l)
        cout<<"right"<<endl;
    else
        cout<<"wrong"<<endl;
    }
    return 0;
}
