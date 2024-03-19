#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n,m,k;
    int *a;
    a=(int*)malloc(210000*sizeof(int));
    (void)scanf("%d",&n);
    k=n-1;
    while(k){
        (void)scanf("%d",&m);
        a[m]++;
        k--;
    }
    for(m=1;m<=n;m++){
        printf("%d\n",a[m]);
    }
    return 0;
}