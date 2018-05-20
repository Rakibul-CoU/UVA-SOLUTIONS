#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a[4], b, c, i, j;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        for(i=0; i<3; i++)
        {
            scanf("%d", &a[i]);
        }
                    sort(a, a+3);
        printf("Case %d: %d\n", j, a[1]);
    }
    return 0;
}
