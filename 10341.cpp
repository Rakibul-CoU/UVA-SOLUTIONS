#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,p, q, r, s, t, u;
    double start, end, mid, f;
    while(scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u)==6)
    {
        if(p*exp(-1)+q*sin(1)+r*cos(1)+s*tan(1)+t+u>1e-9 || p+r+u<0)
        {
            cout<<"No solution"<<endl;
            continue;
        }
        start=0.0;
        end=1.0;
        for(int i=0; i<30; i++)
        {
            mid=(start+end)/2;
            f=p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*mid*mid+u;

            if(f>0)
                start=mid;
            else
                end=mid;
        }
        printf("%.4lf\n", start);
    }
    return 0;
}
