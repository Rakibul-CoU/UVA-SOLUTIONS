#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0, l, m,avr, i, j, n, o, p, q, r, a, b, c;
    int ar[10000];
    while(1)
    {
        k++;
        int sum=0;
        int ans=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=0; i<n; i++)
        {
            sum=sum+ar[i];
        }
        avr=sum/n;
        for(i=0; i<n; i++)
        {
            if(ar[i]>avr)
                ans=ans+(ar[i]-avr);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,ans);
    }
    return 0;
}
