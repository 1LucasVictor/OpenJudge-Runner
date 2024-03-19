#include <stdio.h>
int main(void){
    int a[1000];
    int n,i,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(j=n-1;j>=0;j--){
        printf("%d",a[j]);
        if(j!=0)printf(" ");
    }
    printf("\n");
    return 0;
}
