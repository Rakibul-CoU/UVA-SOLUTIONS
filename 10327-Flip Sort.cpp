#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];

    while(scanf("%d",&n)==1)
    {
        for(int i = 0; i<n; ++i)
            scanf("%d",&a[i]);

        int p = 0;

        for(int i = 1; i<n; ++i)
        {
            for(int j = 0; j<i; ++j)
            {
                if(a[j]>a[i])
                    p++;
            }
        }
        cout<<"Minimum exchange operations : "<<p<<endl;
    }
    return 0;
}
