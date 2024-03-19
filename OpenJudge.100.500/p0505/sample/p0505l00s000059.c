#include <stdio.h>

int main(void){
    int HP,n,i,sum=0;
    int AT[10000 + 1];
    
    scanf("%d %d",&HP,&n);
    
    for (i=0;i<n;i++){
        scanf("%d",&AT[i]);
        sum = sum + AT[i];
    }
    
    if (sum >= HP){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
