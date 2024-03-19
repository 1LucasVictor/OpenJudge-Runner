#include<stdio.h>

int main(){
        int n, wa;

        scanf("%d", &n);

        wa=n;

        while(wa>=10){
                wa=wa%10;
        }

        if(wa==0||wa==1||wa==6||wa==8){
                printf("pon");
        }
        if(wa==3){
                printf("bon");
        }
        if(wa==2||wa==4||wa==5||wa==7||wa==9){
                printf("hon");
        }

        return 0;
}
