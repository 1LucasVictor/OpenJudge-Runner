#include<stdio.h>
#include<stdlib.h>
int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
int main(void){
    int n,i,k=0;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    qsort(a,n,sizeof(int),asc);
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            k = 1;
            break;
        }
    }
    if(k==0){
    puts("YES");}
    else{
        puts("NO");
    }
    return 0;
}