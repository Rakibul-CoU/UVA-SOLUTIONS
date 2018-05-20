#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, q;
    int cases = 0;

    while ( scanf ("%d %d", &n, &q) ) {
        if ( n == 0 && q == 0 ) break;

        int a [10010];

        for ( int i = 0; i < n; i++ ) scanf ("%d", &a [i]);

        sort (a, a + n);

        printf ("CASE# %d:\n", ++cases);

        int query;
        bool found;

        for ( int i = 0; i < q; i++ ) {
            scanf ("%d", &query);
            found = false;
            for ( int j = 0; j < n; j++ ) {
                if ( a [j] == query ) {
                    printf ("%d found at %d\n", query, j + 1);
                    found = true;
                    break;
                }
                else if ( a [j] > query ) break;
            }

            if ( !found ) printf ("%d not found\n", query);
        }
    }

    return 0;
}
