#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    puts(y%2||y<2*x||y>4*x?"No":"Yes");
}