#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int remain = c - (a - b);
    if (remain < 0)remain = 0;
    printf("%d\n",remain);
}