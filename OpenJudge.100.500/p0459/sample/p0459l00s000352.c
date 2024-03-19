#include<stdio.h>

int main(void){
    int x,y;

    scanf("%d\n",&x);
    scanf("%d\n",&y);

    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(i+j==x && (2*i)+(4*j)==y){
                printf("Yes\n");
              	break;
            }
        }
    }
    return 0;
}