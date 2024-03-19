#include<stdio.h>

int main(void){
    int x,y;
    scanf("%d %d",&x,&y);

    if(y>4*x || y<2*x || y%2==1)  
        printf("No");
    else printf("Yes");

    return 0;
}