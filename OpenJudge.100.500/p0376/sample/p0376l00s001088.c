#include<stdio.h>

int main(void){
    int n=0 ,mem=0 ;
    int i=0 ;

    scanf("%d",&n);
    int a[n] ;

    for (i=0 ;i<n ;i++){
        scanf("%d",&mem);
        a[i]=mem;
    }

    for (i=n-1 ;i>-1 ;i--){
        if (i==0){
            printf("%d\n",a[i]);
        } else printf("%d ",a[i]);
    }

    return 0;
}