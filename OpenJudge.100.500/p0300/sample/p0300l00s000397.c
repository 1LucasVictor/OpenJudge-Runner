#include <stdio.h>

int main()
{
    int n,q,s[10000],t[500],i,j;
    int c = 0;

    scanf ("%d",&n);
    for (i = 0; i < n; i++) {
      scanf ("%d",&s[i]);
    }

    scanf ("%d",&q);
    for (i = 0; i < q; i++) {
      scanf ("%d",&t[i]);
    }

    for (i = 0; i < q; i++) {
      for (j = 0; j < n; j++) {
        if (s[j] == t[i]) {
        c++;
        }
      }
    }

    printf ("%d\n",c);

    return 0;
} 