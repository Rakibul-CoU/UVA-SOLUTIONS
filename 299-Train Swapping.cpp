#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j, k, l, a[100000];
    cin>>t;
    while(t--)
    {
        l=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=n-1; j>i; j--)
            {
                if(a[j-1]>a[j])
                {
                    l++;
                    m=a[j-1];
                    a[j-1]=a[j];
                    a[j]=m;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",l);
    }
    return 0;
}
