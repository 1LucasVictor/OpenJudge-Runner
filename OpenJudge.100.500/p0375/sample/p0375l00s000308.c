#include <stdio.h>
int main(void){
    int i,n;
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        if(i%3==0 || i%10==3 || i/10==3 || i/10%10==3 || i/100==3 || i/100%10==3 || i/1000==3 || i/1000%10==3) printf(" %d",i);
    }
    printf("\n");
    return 0;
}