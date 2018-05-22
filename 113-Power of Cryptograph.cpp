#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m, a;
    while(scanf("%lf%lf",&n,&m)==2)
    {
        a=pow(m,1/n);
        printf("%.0lf\n",a);
    }
    return 0;
}
