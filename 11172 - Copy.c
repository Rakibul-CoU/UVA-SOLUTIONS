#include<stdio.h>
int main()
{
    int n, x, y, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x>y)
            printf(">\n");
        else if(x<y)
            printf("<\n");
        else if(x==y)
            printf("=\n");
    }
    return 0;
}
