#include<stdio.h>

int main(void){
    int x;
    scanf("%d", &x);
    for(int i=1; i<=x; i++){
        for(int l=i; l>0; l/=10){
            if(!(l%3) || l%10==3){
                printf(" %d", i);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
