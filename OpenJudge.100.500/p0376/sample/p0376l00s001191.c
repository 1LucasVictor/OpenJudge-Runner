#include <stdio.h>
#define M 105

int main(void){
    int n,i;
    int x[M];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d",x[i]);
        if(i != 0)printf(" ");
    }
    printf("\n");
    return 0;
}
