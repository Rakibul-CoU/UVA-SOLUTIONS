#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j, k, sum=0;
    while(1)
    {
        cin>>t;
        if(t<0)
        {
            break;
        }
        sum++;
        n=1;
        m=0;
        while(n<t)
        {
            n+=n;
            m++;
        }
        cout << "Case " << sum << ": " << m << endl;
    }
    return 0;
}
