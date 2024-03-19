#include<stdio.h>

int main(void){
    int n,i;
    scanf("%d",&n);
    
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    
    for(i=0;i<n-1;i++){
        printf("%d ",b[i]);
    }
    printf("%d\n",b[n-1]);
    
    return 0;
}

