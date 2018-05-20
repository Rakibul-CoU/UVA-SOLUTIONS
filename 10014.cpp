#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases,i,j,n;
    double a0,aN,cI,sum=0;
    scanf("%d",&cases);
    for(i=1;i<=cases;i++){
        if(i>1)
            printf("\n");
        scanf("%d",&n);
        scanf("%lf",&a0);
        scanf("%lf",&aN);
        for(j=0;j<n;j++){
            scanf("%lf",&cI);
            sum+=(n-j)*cI;
        }
        printf("%.2lf\n",(n*a0+aN-2*sum)/(n+1));

    }
    return 0;
}
