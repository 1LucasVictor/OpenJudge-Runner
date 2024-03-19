#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    if(n<3||10000<n){
        return 0;
    }
    int i=1;
    int x;
    for(i=1;i<=n;i++){
        x=i;
        if(x%3==0){
            printf(" %d",i);
        }
        else if(x%10==3){
            printf(" %d",i);
        }
        
    }
    printf("\n");
}
