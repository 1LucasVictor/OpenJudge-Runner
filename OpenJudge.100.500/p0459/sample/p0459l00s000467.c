#include<stdio.h>

int main(void){
    int x,y;
    scanf("%d%d",&x,&y);
    y -= 2 * x;
    puts(y < 0 || y > 2*x || y % 2 ?"No":"Yes"); 
}