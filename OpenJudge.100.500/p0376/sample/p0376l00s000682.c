#include<stdio.h>
int main(void){
    int b,c,n,d,e;
    scanf("%d",&n);
    e=n;
    int a[n];
    for(b=0;b<n;b++){
        scanf("%d",&c);
        a[b]=c;
    }
    for(d=e-1;d>0;d--){
    printf("%d ",a[d]);
    }
    printf("%d\n", a[0]);
    return 0;
}