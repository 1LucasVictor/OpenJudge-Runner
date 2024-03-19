#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
int main(){
    int n,i,j,flag=0,a[200020]={};
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),asc);
    for(i=0; i<n-1; i++){
        if(a[i]==a[i+1])flag=1;
    }
    if(flag==0){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}