#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, m, n, a, b, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &m, &n);
        if(m<n || (m-n)%2!=0)
            printf("impossible\n");
        else
        {
            a=(m-n)/2;
            printf("%d %d\n", n+a, a);
        }
    }
    return 0;
}
