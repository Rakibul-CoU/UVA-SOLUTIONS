#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e,g,f,k,i,j,t, n=0;
    cin>>t;
    while(t--)
    {
        n++;
        scanf("%d/%d/%d",&a, &b, &c);
        scanf( "%d/%d/%d",&e, &f, &g);
        k=(c-g);
        if(b<f)
            k--;
        else if(b==f)
        {
            if(a<e)
                k--;
        }
        if(k<0)
            printf("Case #%d: Invalid birth date\n", n );
        else if(k>130)
            printf("Case #%d: Check birth date\n", n);
        else
            printf("Case #%d: %d\n",n,k);
    }
    return 0;
}
