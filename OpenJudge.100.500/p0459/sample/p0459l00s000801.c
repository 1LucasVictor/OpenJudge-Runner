#include<stdio.h>

int main(void){
    int x,y;
    int check = 0;
    int check2 = 0;

    scanf("%d\n",&x);
    scanf("%d\n",&y);

    for(int i = 0; i <= 100; i++){
        if(check == 1) break;
        for(int j = 0; j <= 100; j++){
            if(i+j==x && (2*i)+(4*j)==y){
                printf("Yes\n");
                check = 1;
              	check2 = 1;
              	break;
            }
        }
    }
    if(check2 ==0){
        printf("No\n");
    }
    return 0;
}