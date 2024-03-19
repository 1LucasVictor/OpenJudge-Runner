#include <stdio.h>
int main(void)
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(Y%4 == 0 && Y/4 <= X && X <= Y/2){
        printf("Yes");
    }else if(Y%2 == 0 && Y%4 != 0 && Y/4+1 <= X && X <= Y/2){
        printf("Yes");
    }else{
        printf("No");
    }
}