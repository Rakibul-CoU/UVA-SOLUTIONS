#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,temp,j,ans,sum;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        printf("%d %d ",n,m);
        if(n>m)
        {
            temp=m;
            m=n;
            n=temp;
        }
        int max = -1;
        for(j=n; j<=m; j++)
        {
            sum=0;
            int x = j;
            while(x!=1)
            {
                if(x%2!=0) x = 3*x+1;
                else x = x/2;
                sum++;
            }
            if(sum>max) max = sum;

        }

        printf("%d\n",max+1);
    }
    return 0;
}

/**
#include<stdio.h>
int main()
{
    int n,m,temp,j,ans,sum;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        printf("%d %d ",n,m);
        if(n>m)
        {
            temp=m;
            m=n;
            n=temp;
        }
        int max = -1;
        for(j=n; j<=m; j++)
        {
            sum=0;
            int x = j;
            step2 :
                if(x==1) goto step3;
                if(x%2!=0) x = 3*x+1;
                else x = x/2;
                sum++;
            goto step2;
            step3 :
            if(sum>max) max = sum;

        }

        printf("%d\n",max+1);
    }
    return 0;
}
*/
