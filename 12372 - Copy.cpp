#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m=0, a, b, c;
    scanf("%d", &n);
    while(n--)
    {
        m++;
        scanf("%d %d %d", &a, &b, &c);
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n", m);
        else
            printf("Case %d: bad\n", m);
    }
    return 0;
}
