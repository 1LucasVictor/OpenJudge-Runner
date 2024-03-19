#include<stdio.h>
int main(void){
    int n;
    int i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf(" ");
            printf("%d", i);
        }
        else if(i%10==3){
            printf(" ");
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
