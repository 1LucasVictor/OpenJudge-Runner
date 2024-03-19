#include <stdio.h>
#include <stdlib.h>
int asc(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(void){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),asc);
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}