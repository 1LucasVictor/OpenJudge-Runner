#include <stdio.h>
#include <string.h>

int main(){
    int i, j, t, n, m, k, total=0;
    scanf("%d%d%d",&n,&m,&k);

    int a[n+m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n;i<n+m;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n+m-1;i++){
        for(j=i+1;j<n+m;j++){
            if(a[i] > a[j]){
                t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
    }
    i = 0;
    while(total <= k){
        total += a[i++];
    }
    printf("%d\n",i-1);
    return 0;
}