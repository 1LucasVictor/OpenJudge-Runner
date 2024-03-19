#include <stdio.h>

int main(void){
    long HP,n,i,sum=0;
    long AT[10000 + 1];
    
    scanf("%ld %ld",&HP,&n);
    
    for (i=0;i<n;i++){
        scanf("%ld",&AT[i]);
        sum = sum + AT[i];
    }
    
    if (sum >= HP){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
