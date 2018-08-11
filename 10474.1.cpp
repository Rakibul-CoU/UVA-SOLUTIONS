/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
**/
#include<bits/stdc++.h>
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
using namespace std;
int a[10000],x,pos, mid;
void binarySearch(int low, int high)
{
    if(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==x)
            pos = mid;
        if(x<=a[mid])
            binarySearch(low, mid-1);

        else
            binarySearch(mid+1, high);
    }
    else
        return;
}
int main()
{
    int n,q,i, cnt=0;
    while(scanf("%d %d", &n, &q)==2&&(n||q))
    {
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        sort(a, a+n);
        printf("CASE# %d:\n", ++cnt);
        for(i=0; i<q; i++)
        {
            scanf("%d", &x);
            pos = -1;
            binarySearch(0,n-1);
            if(pos<0)
                printf("%d not found\n", x);
            else
                printf("%d found at %d\n", x, pos+1);
        }
    }
    return 0;
}
