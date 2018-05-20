#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m=0, i, j, k;
    char st[1000];
    while(scanf("%s", &st)!=EOF)
    {
        m++;
        k=strlen(st);
        if(st[0]=='*')
            break;
        if(k==4)
            printf("Case %d: Hajj-e-Akbar\n", m);
        else
            printf("Case %d: Hajj-e-Asghar\n", m);

    }
    return 0;
}
