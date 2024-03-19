#include <stdio.h>
int main(void){
    
    int i,n,tmp;
    scanf("%d",&n);
    int a[n];
    
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n/2; i++){
        tmp =a[i];
        a[i] =a[n-1-i];
        a[n-1-i] =tmp;
    }
    
    for(i=0; i<n; i++){
    if(i)printf(" ");
    printf("%d",a[i]);
    }
    printf("\n");
    

    return 0;
}

