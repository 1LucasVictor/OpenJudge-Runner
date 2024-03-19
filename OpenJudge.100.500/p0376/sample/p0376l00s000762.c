#include <stdio.h>
int main(void){
    int n,i,a[100];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        printf("%d ",a[n-i]);
    }
    printf("%d\n",a[0]);
    return 0;
}