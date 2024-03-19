#include<stdio.h>

int main(void){
int n;
int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        if(i%3==0){
            printf(" %d",i);
        }
        if(i>=1000){
            if(i/1000==3){
                printf(" %d",i);
            }
        }
        if(i>=100&&i<1000){
            if(i/100==3){
                printf(" %d",i);
            }
        }
        if(i>=10&&i<100&&i%10>0){
            if(i/10==3||i%10==3){
                printf(" %d",i);
            }

        }


    }
    printf("\n");

    return 0;
}