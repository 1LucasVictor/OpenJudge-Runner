#include<stdio.h>
    int main(void){
    int input;
    int s,h,m;
    scanf("%d",&input);
    s = input%60;
    m = input%3600/60;
    h = input/3600;
    printf("%d:%d:%d\n",h,m,s);
 return 0;
 }