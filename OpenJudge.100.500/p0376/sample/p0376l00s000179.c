#include<stdio.h>

int main(void){
    int n=0 ,mem=0 ;
    int i=0 ,j=0 ;

    scanf("%d",&n);
    int a[n] ;

    for (i=0 ;i<n ;i++){
        scanf("%d",&mem);
        a[i]=mem;
    }

    for (i=0 ;i<n-1 ;i++){
        for (j=i+1 ;j<n ;j++){
            if (a[i]<a[j]){
                mem=a[i];
                a[i]=a[j];
                a[j]=mem;
            }
        }
    }

    for (i=0 ;i<n ;i++){
        if (i==(n-1)){
            printf("%d\n",a[i]);
        } else printf("%d ",a[i]);
    }

    return 0;
}