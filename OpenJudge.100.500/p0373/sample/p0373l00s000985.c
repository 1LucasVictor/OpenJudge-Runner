#include<stdio.h>

int main(void){
    int i,j,h,w;
    while(1){
    scanf("%d %d",&h,&w);
    if(h == 0 && w == 0)
        break;
    for(i = 0;i < w;i++)
        printf("#");
    printf("\n");
    for(i = 2;i <= h - 1;i++){
        printf("#");
        for(j = 2;j <= w- 1;j++)
            printf(".");
        printf("#\n");
    }
    for(i = 0;i < w;i++)
        printf("#");
    printf("\n\n\n");
    }
    return 0;
}