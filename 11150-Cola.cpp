#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a, j, k, l;
    while(scanf("%d", &n)==1)
    {
        t=n;
        while(n>=3)
        {
            t=t+(n/3);
            n=(n/3)+(n%3);
        }
        if(n==2)
        {
            t++;
        }
        cout<<t<<endl;
    }
    return 0;
}
