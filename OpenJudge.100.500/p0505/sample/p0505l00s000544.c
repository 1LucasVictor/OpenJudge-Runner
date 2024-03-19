#include <stdio.h>
#define N_MAX 100000

int main()
{
    int h, n;
    int a[N_MAX];
    int tot;
    
    scanf("%d%d",&h,&n);
    for ( int i=0; i<n; i++ ){
        scanf("%d", &a[i]);
        tot += a[i];
    }
    
    if ( tot >= h ){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

}
