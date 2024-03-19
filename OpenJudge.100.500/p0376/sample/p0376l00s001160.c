#include<stdio.h>
int main(void){
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int tmp1,tmp2;
    for(i=0;i<n/2;i++){
        tmp1=a[i];
        tmp2=a[n-1-i];
        a[i]=tmp2;
        a[n-1-i]=tmp1;
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        if(i==n-1){
            printf("\n");
        }else{
            printf(" ");
        }
    }
    return 0;
}
