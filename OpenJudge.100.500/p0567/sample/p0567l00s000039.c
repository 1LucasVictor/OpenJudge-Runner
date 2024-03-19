#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int remain = c - (a - b);
    printf("%d\n",remain);
}